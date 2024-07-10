#include "main.h"
#include <fcntl.h> /* open */
#include <unistd.h> /* read, write, close */
#include <stdlib.h> /* malloc, free */

/**
 * read_textfile - Reads text file and prints to POSIX
 * standard output
 * @filename: Name if the file to read
 * @letters: Number of letters it should read and print
 *
 * Description: File descriptors are integers that uniquely
 * represent an open file within a process
 *
 * Return: Actual number of letters it could read and print,
 * or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor; /* descriptor for opened file */
	ssize_t num_read, num_written; /* num bytes read & written */
	char *buffer; /* buffer to hold read content */

	if (filename == NULL)
		return (0);

	/* open file in read only mode */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1) /* check if successfully opened */
		return (0);

	buffer = malloc(sizeof(char) * letters); /* buffer memory */
	if (buffer == NULL) /* check if allocation ws successful */
	{
		close(file_descriptor);
		return (0);
	}

	/* read content into buffer */
	num_read = read(file_descriptor, buffer, letters);
	if (num_read == -1) /* check if read operation was successful */
	{
		free(buffer); /* free allocated buffer */
		close(file_descriptor);
		return (0);
	}
	/* write buffer to standard output */
	num_written = write(STDOUT_FILENO, buffer, num_read);
	if (num_written == -1 || num_written != num_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (num_read); /* number of letters read and written */
}

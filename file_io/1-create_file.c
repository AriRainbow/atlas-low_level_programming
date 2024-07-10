#include "main.h"
#include <stdio.h> /* printf, dprintf */
#include <stdlib.h> /* exit */
#include <fcntl.h> /* open flags */
#include <unistd.h> /* open, write, close */
#include <string.h> /* strlen */

/**
 * create_file - Creates a file and writes text content to it
 * @filename: Name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_status;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	while (text_content[text_length])
		text_length++;

	write_status = write(fd, text_content, text_length);
	if (write_status == -1)
	{
		close(fd);
		return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}

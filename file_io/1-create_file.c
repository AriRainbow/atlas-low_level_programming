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
	int fd = -1, write_status = -1, close_status = -1;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		/* get length of text_content string */
		text_length = strlen(text_content);

		/* write text_content to file */
		write_status = write(fd, text_content, text_length);
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* close file descriptor */
	close_status = close(fd);
	if (close_status == -1)
		return (-1);

	return (1);
}

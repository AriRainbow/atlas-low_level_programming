#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to append the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status;
	size_t text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
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

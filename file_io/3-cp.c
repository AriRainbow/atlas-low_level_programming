#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies content of one file to another
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, or corresponding error code on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to; /* descriptors for source and destination */
	ssize_t bytes_read, bytes_written; /* store number of bytes */
	char buffer[BUFFER_SIZE]; /* used to R and W data in chunks */
	struct stat st; /* struct used to retreive info about source file */

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97); /* incorrect usage or insufficient command-line args */
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read file from %s\n", av[1]);
		exit(98); /* inability to read file */
	}

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(fd_from);
		exit(99); /* inability to write to 'file_to' */
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}

		if (bytes_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}

		if (fstat(fd_from, &st) == -1)
		{
			close(fd_from);
			close(fd_to);
			exit(98);
		}

		if (close(fd_from) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_from);
			close(fd_to);
			exit(100); /* inability to close */
		}

		if (close(fd_to) == -1)
		{
			dprintf(2, "Error: Can't close fd %d\n", fd_to);
			exit(100);
		}

	return (0);
}

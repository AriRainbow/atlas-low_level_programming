#include "main.h"
#include <unistd.h> /* header file for the 'write' system call */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (success). -1 (error)
 *
 */

int _putchar(char c)
	/* Takes character c and returns as integer */
{
	return write(1, &c, 1);
	/** '1': file descriptor for stdout
	 *  '&c': address of the character to write
	 *  '1': number of bytes to write (single character = 1) */ 
}

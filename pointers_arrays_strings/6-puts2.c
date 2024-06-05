#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * puts2 - Function prints every other character
 *
 * @str: String to print
 *
 * Description: Starts at first char, followed by new line.
 * Uses 'write' system call to print to std output.
 *
 */

void puts2(char *str)
{
	int n = 0; /* loop counter */

	/* check input string and current char are not NULL */
	while (str && str[n])
	{
		/* check index is even */
		if (n % 2 == 0)
		{
			/* print char to std output using 'write' */
			write(1, &str[n], 1);
		}
		n++;
	}

	/* 'write' new line */
	write(1, "\n", 1);
}

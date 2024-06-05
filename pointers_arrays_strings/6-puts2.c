#include "main.h"
#include <stdio.h>

/**
 * puts2 - Function prints every other character
 *
 * @str: String to iterate
 *
 * Description: Starts at first char, followed by new line
 *
 */

void puts2(char *str)
{
	int n; /* loop counter */

	/* iterate string */
	for (n = 0; str[n] != '\0'; n++) /* loop until end */
	{
		if (n % 2 == 0) /* check if index even */
		{
			/* %c single character */
			printf("%c", str[n]); /* print current even index */
		}
	}

	printf("\n"); /* new line */
}

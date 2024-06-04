#include "main.h"

/**
 * print_rev - Function prints string in reverse,followed by new line
 *
 * @s: Pointer to string
 *
 * Description: First calculates length of string, then iterates backwards
 *
 */

void print_rev(char *s)
{
	int length = 0;
	int n;

	/* find length of string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* print string in reverse */
	for (n = length - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

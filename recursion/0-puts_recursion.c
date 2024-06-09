#include "main.h"

/**
 * _puts_recursion - Function prints string, followed by new line
 *
 * @s: string to be printed
 *
 * Description:
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return; /* stop recursion */
	}

	_putchar(*s); /* print current */
	_puts_recursion(s + 1); /* recursive call */
}

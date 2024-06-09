#include "main.h"

/**
 * _print_rev_recursion - Function prints string in reverse
 *
 * @s: String to print
 *
 * Description:
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		return; /* stop recursion */
	}

	_print_rev_recursion(s + 1); /* recursive call */
	_putchar(*s);
}

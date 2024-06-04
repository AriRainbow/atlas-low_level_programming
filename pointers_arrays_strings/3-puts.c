#include "main.h"

/**
 * _puts - Function prints a string, followed by new line,
 * to stout
 *
 * @str: Pointer to string
 *
 * Description: Uses helper function _putchar
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

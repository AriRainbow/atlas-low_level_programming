#include "main.h"

/**
 * print_numbers - Function prints numbers 0 to 9, followed by new line
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: Unsigned long int to print as binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0; /* flag to ignore leading zeros */

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1; /* set flag after first '1' is printed */
		}
		else if (flag == 1 || mask == 1)
		{
			_putchar('0');
		}
		mask >>= 1; /* shift mask to right by 1 */
	}
}

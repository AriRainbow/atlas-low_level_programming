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

/**
 * Description: My Notes
 * Mask initialization sets up mask to check each bit from most significant
 * bit (MSB) to least significant bit (LSB) without using arrays, malloc,
 * %, or / operators. Initializes with single bit set to 1 at MSB position.
 * '(sizeof(unsigned long int) * 8' gives total number bits in unsigned long int
 * Typically 64 bits 
 * '1UL << (sizeof(unsigned long int) * 8 - 1)' shifts number 1 left by 
 * '(total bits - 1)' positions, setting the MSB
 * 8 bits in a byte
 * 'sizeof' returns bytes
 * 1UL ensures bit shift operates on 64-bit value, full range of 
 * 'unsigned long int'
 */

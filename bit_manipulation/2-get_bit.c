#include "main.h"
#include <stddef.h>

/**
 * get_bit - Returns value of a bit at given index
 * @n: Unsigned long int input number
 * @index: Index of the bit to retrieve, starting from 0
 *
 * Return: Value of the bit at index 'index'
 * or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* check if index is within valid range for unsigned long int */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Shift bits of n right by index and check least significant bit */
	return ((n >> index) & 1);
}

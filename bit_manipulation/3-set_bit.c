#include "main.h"
#include <stddef.h>

/**
 * set_bit - Sets value of a bit to 1 at a given index
 * @n: Pointer to unsiged long int to modify
 * @index: Index of the bit to set, starting from 0
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is within valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* set the bit at specified index to 1 using bitwise OR */
	*n |= (1UL << index);

	return (1);
}

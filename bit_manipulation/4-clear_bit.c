#include "main.h"
#include <stddef.h>

/**
 * clear_bit - Sets value of a bit to 0 at given index
 * @n: Pointer to the unsigned int to modify
 * @index: Index of the bit to clear, starting from 0
 *
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is within valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* clear bit at specified index to 0 using bitwise AND and NOT */
	*n &= ~(1UL << index);

	return (1);
}

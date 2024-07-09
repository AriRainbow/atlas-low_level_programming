#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get 
 * from one number to another
 * @n: First unsigned long int
 * @m: Second unsigned long int
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m; /* XOR the two numbers */
	unsigned int count = 0; /* count of bits to flip */

	while (xor_result)
	{
		count += xor_result & 1; /* add 1 to count if LSB is 1 */
		xor_result >>= 1; /* shift right by 1 to check next bit */
	}

	return (count); /* total counts of bits to flip */
}

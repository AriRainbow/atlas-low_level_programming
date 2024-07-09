#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: Converted number, or 0 if 
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0; /* initialize result to store converted uint */
	int index = 0; /* initialize index to iterate binary string */

	if (b == NULL)
		return (0); /* if input string pointer is NULL */

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0); /* if any char not '0' or '1' */

		result = result << 1; /* shift left to make space for next bit */
		if (b[index] == '1')
			result += 1; /* add 1 if current bit is '1' */

		index++; /* next char in string */
	}

	return (result); /* converted unsigned int */
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function creates array of char, and 
 * initializes with specific char
 *
 * @size: Size of array
 * @c: Char to initialize
 *
 * Return: NULL if size is 0 or if fails, otherwise 
 * returns pointer to the array
 *
 */

char *create_array(unsigned int size, char c)
	/* "*" references pointer */
{
	char *array; /* first element of array */
	/* declares array as pointer to char */

	unsigned int n; /* size of array */

	if (size == 0)
		return (NULL);
}

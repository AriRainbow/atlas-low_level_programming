#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function creates array of intgers
 *
 * @min: Minimum value in array
 * @max: Maximum value in array
 *
 * Description:
 *
 * Return: NULL if min > max,
 * NULL if malloc fails, or
 * Pointer to new array
 *
 */

int *array_range(int min, int max)
{
	int *array;
	int size;
	int n;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	/* malloc */
	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++, min++)
	{
		array[n] = min;
	}

	return (array);
}

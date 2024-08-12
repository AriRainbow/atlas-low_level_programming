#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Search for a value in an array of integers using
 * linear search
 * @array: Pointer to first element of array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where the value is located, or -1 if not found
 * or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return ((int)index);
	}

	return (-1);
}

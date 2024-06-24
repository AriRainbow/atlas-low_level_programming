#include "function_pointers.h"

/**
 * int_index - Function seaches for an integer
 *
 * @array: Array to search
 * @size: Number of elements in array
 * @cmp: Pointer to function to be used to compare values
 *
 * Description: What does a returned index look like?
 *
 * Return: Index of the first element for which the cmp 
 * function does not return 0. Return -1 if no element 
 * matches or if size <= 0
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) != 0)
		{
			return (n); /* index */
		}
	}

	return (-1); /* no element match cmp criteria */
}

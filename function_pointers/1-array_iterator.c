#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given 
 * as a parameter on each element of an array
 *
 * @array: Array to iterate over
 * @size: Size of the array
 * @action: Pointer to the function to be executed on each element
 *
 * Description:
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t z;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (z = 0; z < size; z++)
	{
		action(array[z]);
	}
}

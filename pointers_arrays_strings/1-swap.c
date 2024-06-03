#include "main.h"

/**
 * swap_int - Function swaps the value of two integers
 *
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 *
 * Description: Function uses a temporary variable to hold one 
 * of the values during swap
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

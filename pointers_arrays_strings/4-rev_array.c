#include "main.h"

/**
 * reverse_array - Function reverses content of array of integers
 *
 * @a: Pointer to array of integers
 * @n: Number elements in array
 *
 * Description: Reverses by swapping elements symetrically
 * around its midpoint
 *
 */

void reverse_array(int *a, int n)
{
	int start = 0; /* start from beginning of array */
	int end = n - 1; /* start from end of array */
	int temp; /* helps with swapping elements */

	while (start < end)
	{
		/* swap symmetrically around midpoint */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* move pointers toward midpoint */
		start++;
		end--;
	}
}

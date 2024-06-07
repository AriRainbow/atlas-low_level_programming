#include "main.h"
#include <stdio.h>

/**
 * print_array - Function prints n elements of
 * array of integers, followed by new line.
 *
 * @a: Pointer to array of integers
 * @n: Number of elements to print
 *
 * Description: Numbers separated by comma and space, numbers
 * displayed in same order as stored in array
 *
 */

void print_array(int *a, int n)
{
	int x; /* counter */

	if (n <= 0) /* check if non-positive */
		return;

	printf("%d", a[0]); /* Print 1st element, no comma */

	/* print rest of elements w/ comma and space */
	for (x = 1; x < n; x++)
	{
		printf(", %d", a[x]); /* print w/ comma and space */
	}

	printf("\n");
}

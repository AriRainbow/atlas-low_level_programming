#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function allocates memory using malloc
 *
 * @b: number of bytes to allocate
 *
 * Description:
 *
 * Return: Pointer to allocated memory. If fails, function
 * should cause normal process termination with a 
 * status value of 98.
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

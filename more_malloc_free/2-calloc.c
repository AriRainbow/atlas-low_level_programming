#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function allocates memory for an array using malloc
 *
 * @nmemb: Number of elements
 * @size: Byte size of each element
 *
 * Description: Memory is set to zero
 *
 * Return: NULL if nmemb or size is 0,
 * NULL if malloc fails, or
 * Pointer to allocated memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned int n;
	char *ptr;

	/* check for invalid input */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* malloc */
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);

	/* initialize to 0 */
	ptr = memory;
	for (n = 0; n < (nmemb * size); n++)
		ptr[n] = 0;

	return (memory);
}

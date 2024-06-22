#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees dogs
 *
 * @d: Pointer to dog_t struct
 *
 * Description:
 *
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}

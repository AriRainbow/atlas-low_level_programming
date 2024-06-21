#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function that prints a struct dog
 *
 * @d: Pointer to struct dog, can be NULL
 *
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		/* floating point variables are never NULL */
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
		/* ptr NULL when don't point to valid mem address */
	}
}

#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Function initializes variable of type struct dog
 * @d: Variable to iniatiate (type: struct dog *)
 * @name: Name to assign dog (type: char *)
 * @age: Age to assign dog (type: float)
 * @owner: Owner to assign dog (type: char *)
 *
 * Description: -> Operator used to access members of structure
 * through a pointer. Shorthand for dereferencing pointer
 * to structure, then accessing a member of that structure.
 * If do not use ->, dereference pointer, then use (.) operator. 
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

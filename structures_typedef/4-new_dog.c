#include "dog.h"
#include <stdlib.h> /* malloc */
#include <string.h> /* string manipulation ie. copy name and owner */

/**
 * new_dog - Function that creates a new dog
 *
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description:
 *
 * Return: Pointer to new dog, NULL if fails
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	/* allocate mem for dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* allocate mem and copy name */
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	strcpy(name_copy, name);

	/* allocate mem and copy owner */
	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}

	strcpy(owner_copy, owner);

	/* set dog attributes */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

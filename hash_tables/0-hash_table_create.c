#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array in the hash table
 *
 * Return: Pointer to newly created hash table, or NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table; /* pointer to new created hash table */
	unsigned long int i; /* counter */

	/* allocate memory for hash table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* set size of array */
	new_table->size = size;

	/* allocate memory for array of pointers */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table); /* free prev allocated memory */
		return (NULL);
	}

	/* initialize each element of array to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}

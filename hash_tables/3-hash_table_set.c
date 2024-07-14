#include "hash_tables.h"

/**
 * hash_table_set - Adds element to the hash table
 * @ht: Pointer to hash table
 * @key: Key to be added (cannot be empty string)
 * @value: Value associated with key
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index; /* index in hash table array */
	hash_node_t *new_node; /* pointer to new node */
	hash_node_t *current_node; /* pointer to iterate linked list */
	char *key_copy; /* copy of the key */
	char *value_copy; /* copy of the value */

	/* validate input parameters */
	if (!ht || !key || !value || *key == '\0')
		return (0);

	/* generate index for the key */
	index = key_index(( const unsigned char *)key, ht->size);

	/* traverse linked list at index to check if key already exists */
	current_node = ht->array[index];
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			/* key exists, update value */
			free(current_node->value);
			value_copy = strdup(value);
			if (!value_copy)
				return (0);
			current_node->value = value_copy;
			return (1);
		}
		current_node = current_node->next;
	}

	/* key does not exist, create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	key_copy = strdup(key);
	if (!key_copy)
	{
		free(new_node);
		return (0);
	}
	value_copy = strdup(value);
	if (!value_copy)
	{
		free(key_copy);
		free(new_node);
		return (0);
	}

	/* intialize new node and insert at beginning of the list */
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

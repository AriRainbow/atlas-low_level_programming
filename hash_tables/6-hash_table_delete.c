#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to hash table to delete
 *
 * Description:
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i; /* loop index */
	hash_node_t *current_node; /* pointer to current node */
	hash_node_t *temp_node; /* pointer to temp node for freeing */

	/* validate input parameter */
	if (!ht)
		return;

	/* traverse hash table array */
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			temp_node = current_node->next; /* ptr to next */
			free(current_node->key); /* free key */
			free(current_node->value); /* free value */
			free(current_node); /* free current node */
			current_node = temp_node; /* next node */
		}
	}

	/* free array and hash table structure */
	free(ht->array);
	free(ht);
}

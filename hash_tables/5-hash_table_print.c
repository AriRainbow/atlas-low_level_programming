#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints all key/value pairs in hash table
 * @ht: Pointer to hash table
 *
 * Description:
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i; /* loop index */
	hash_node_t *node; /* pointer to traverse linked list */
	int first_element = 1; /* flag to track first element */

	/* validate input parameter */
	if (!ht)
		return;

	/* print open brace */
	printf("{");

	/* traverse hash table array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			/* comma separator if not first element */
			if (!first_element)
				printf(",");

			/* print key/value pair */
			printf("'%s': '%s'", node->key, node->value);

			/* next node */
			node = node->next;
			first_element = 0;
		}
	}

	/* print closing brace */
	printf("}\n");
}

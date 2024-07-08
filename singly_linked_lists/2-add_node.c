#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds new node at the beginning of list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be added to new node
 *
 * Description:
 * Return: Address of new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* pointer to new node */
	char *new_str; /* pointer to duplicated string */
	unsigned int len = 0; /* length of new string */

	/* duplicate the string and check for success */
	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);

	/* calculate length of new string */
	while (str[len])
		len++;

	/* allocate memory for new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

	/* set new node's values */
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head; /* point new node to current head */

	/* update head to point to new node */
	*head = new_node;

	return (new_node); /* address of new element */
}

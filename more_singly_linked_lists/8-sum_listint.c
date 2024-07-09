#include "lists.h"

/** sum_listint - Returns sum of all data of listint_t linked list
 * @head: Pointer to head of list
 *
 * Return: Sum of all data, or 0 is list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n; /* add data of current node to sum */
		head = head->next; /* move to next node */
	}

	return (sum);
}

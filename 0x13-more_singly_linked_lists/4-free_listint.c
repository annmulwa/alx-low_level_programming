#include "lists.h"

/**
 * free_listint - frees a list
 * @head: address of the nodes
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

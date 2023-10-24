#include "lists.h"

/**
 * free_listint - frees a list
 * @head: address of the nodes
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}

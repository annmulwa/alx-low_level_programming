#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: contains address of the nodes
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	else
		while (*head != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
	*head = NULL;
}

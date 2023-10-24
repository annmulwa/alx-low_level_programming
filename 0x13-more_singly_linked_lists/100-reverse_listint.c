#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: contains the address of the first node
 * Return: the pointer to the first node after reversing
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *nextnode = NULL;
	listint_t *previousnode = NULL;

	while (*head != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = previousnode;
		previousnode = *head;
		*head = nextnode;
	}
	*head = previousnode;

	return (*head);
}

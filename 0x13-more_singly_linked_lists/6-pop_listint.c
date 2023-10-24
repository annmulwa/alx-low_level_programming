#include "lists.h"

/**
 * pop_listint - deletes the first node
 * @head: address of the nodes
 * Return: the head's node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);

}

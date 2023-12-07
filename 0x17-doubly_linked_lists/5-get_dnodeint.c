#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 * @head: head of dlist
 * @index: node to be returned
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	i = 0;
	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}

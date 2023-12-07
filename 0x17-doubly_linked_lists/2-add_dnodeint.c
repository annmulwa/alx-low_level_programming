#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning og dlist
 * @head: double pointer to head of dlist
 * @n: element in dlist
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nodestart;
	dlistint_t *h;

	nodestart = malloc(sizeof(dlistint_t));
	if (nodestart == NULL)
		return (NULL);
	nodestart->n = n;
	nodestart->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	nodestart->next = h;
	if (h != NULL)
		h->prev = nodestart;
	*head = nodestart;
	return (nodestart);
}

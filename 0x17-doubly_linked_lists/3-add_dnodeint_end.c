#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of the dlist
 * @head: pointer to the address of the head
 * @n: element in the node
 * Return: pointer to the newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodeend;
	dlistint_t *h;

	nodeend = malloc(sizeof(dlistint_t));
	if (nodeend == NULL)
		return (NULL);
	nodeend->n = n;
	nodeend->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = nodeend;
	}
	else
	{
		*head = nodeend;
	}
	nodeend->prev = h;
	return (nodeend);
}

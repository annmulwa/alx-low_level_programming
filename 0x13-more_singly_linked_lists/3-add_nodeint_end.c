#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: address of the node
 * @n: integer in the node
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnodeend, *tmp = *head;

	newnodeend = malloc(sizeof(listint_t));
	if (newnodeend == NULL)
		return (NULL);
	newnodeend->n = n;
	newnodeend->next = NULL;
	if (*head == NULL)
		*head = newnodeend;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newnodeend;
	}
	return (newnodeend);
}

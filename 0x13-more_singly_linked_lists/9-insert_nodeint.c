#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at a given position
 * @head: address of the first node
 * @idx: index
 * @n: integer at node
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp = *head;
	unsigned int j;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || head == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (j = 0; j < idx && tmp != NULL; j++)
	{
		if (j == idx - 1)
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			return (newnode);
		}
		else
			tmp = tmp->next;

	}
	return (NULL);

}

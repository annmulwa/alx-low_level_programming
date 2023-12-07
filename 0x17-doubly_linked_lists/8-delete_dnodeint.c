#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a certain index
 * @head: head of dlist
 * @index: index of the node to be deleted
 * Return: -1 on failure else 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hf;
	dlistint_t *hb;
	unsigned int i;

	hf = *head;

	if (hf != NULL)
		while (hf->prev != NULL)
			hf = hf->prev;
	i = 0;

	while (hf != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = hf->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hb->next = hf->next;
				if (hf->next != NULL)
					hf->next->prev = hb;
			}
			free(hf);
			return (1);
		}
		hb = hf;
		hf = hf->next;
		i++;
	}
	return (-1);
}

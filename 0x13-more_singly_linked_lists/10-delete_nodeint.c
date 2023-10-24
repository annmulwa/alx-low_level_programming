#include "lists.h"
/**
 * delete_nodeint_at_index - deletes nodes at a certain position
 * @head: address of thr first node
 * @index: index of the node to be deleted
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deletenode = NULL, *tmp = *head;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (j < index - 1)
	{
		if (tmp == NULL || (tmp->next) == NULL)
			return (-1);
		tmp = tmp->next;
		j++;
	}
	deletenode = tmp->next;
	tmp->next = deletenode->next;
	free(deletenode);
	return (1);
}

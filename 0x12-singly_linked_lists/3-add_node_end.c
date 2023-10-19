#include "lists.h"

/**
 * add_node_end - adda a new node at the end of a list
 * @head: contains address of the first node
 * @str: string in node
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_newelement, *tmp;
	unsigned int i, count = 0;

	end_newelement = malloc(sizeof(list_t));
	if (end_newelement == NULL)
		return (NULL);
	end_newelement->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	end_newelement->len = count;
	end_newelement->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = end_newelement;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = end_newelement;
	}
	return (*head);

}

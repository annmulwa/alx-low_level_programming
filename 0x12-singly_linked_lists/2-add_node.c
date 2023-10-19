#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: head node
 * @str: string in node
 * Return: new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newelement;
	unsigned int i, count = 0;

	newelement = malloc(sizeof(list_t));
	if (newelement == NULL)
		return (NULL);
	newelement->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newelement->len = count;
	newelement->next = *head;
	*head = newelement;

	return (*head);
}

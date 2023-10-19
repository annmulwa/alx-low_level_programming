#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 * @h: head of nodes
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

#include "lists.h"

/**
 * print_listint - prints the integers in a node
 * @h: head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}

#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: contains address of the first node
 * Return: the number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	unsigned int length = 0;
	int sub;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		sub = *h - (*h)->next;
		if (sub > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}

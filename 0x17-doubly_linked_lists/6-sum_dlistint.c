#include "lists.h"

/**
 * sum_dlistint - return sum of all the data n
 * @head: head of dlist
 * Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

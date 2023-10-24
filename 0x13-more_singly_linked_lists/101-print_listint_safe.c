#include "lists.h"
#include <stdio.h>

size_t print_listint_node(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * print_listint_node - prints the number of nodes
 * @head: contains address of the first node
 * Return: nodes or 0
 */
size_t print_listint_node(const listint_t *head)
{
	const listint_t *slow, *fast;
	unsigned int count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				count++;
				slow = slow->next;
			}

			return (count);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a list safely.
 * @head: contains address of the first node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int count, idx = 0;

	count = print_listint_node(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < count; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}

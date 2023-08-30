#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts  unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t .
 *
 * Return: If the list is not looped 0 or
 * Otherwise return the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *hippo, *rabbit;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	hippo = head->next;
	rabbit = (head->next)->next;

	while (rabbit)
	{
		if (hippo == rabbit)
		{
			hippo = head;
			while (hippo != rabbit)
			{
				nodes++;
				hippo = hippo->next;
				rabbit = rabbit->next;
			}

			hippo = hippo->next;
			while (hippo != rabbit)
			{
				nodes++;
				hippo = hippo->next;
			}

			return (nodes);
		}

		hippo = hippo->next;
		rabbit = (rabbit->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: the head pointer of the listint_t list.
 *
 * Return: The nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}


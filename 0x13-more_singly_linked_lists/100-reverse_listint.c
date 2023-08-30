#include "lists.h"

/**
 * reverse_listint - linked list reversal
 * @head: the first node pointer in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *beginning = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = beginning;
		beginning = *head;
		*head = next;
	}

	*head = beginning;

	return (*head);
}


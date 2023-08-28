#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the first element pointer in the linked list
 * Return: data inside the deleted element,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (number);
}


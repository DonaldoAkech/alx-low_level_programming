#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: The first element pointer in the list
 * @n: data to insert new element
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *new = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (new->next)
		new = new->next;

	new->next = node;

	return (node);
}


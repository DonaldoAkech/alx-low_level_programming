#include "lists.h"

/**
 * add_nodeint - adds a new node at the starts of the listint_t list
 * @head: first node pointer in the list
 * @n: data to insert in that new node
 *
 * Return: address of the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}


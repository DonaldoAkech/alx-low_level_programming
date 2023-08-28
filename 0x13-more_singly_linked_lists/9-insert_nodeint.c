#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * in the linked list
 * @head: the first node pointer in the list
 * @idx: index where the new node is being added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *node;
	listint_t *new = *head;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (p = 0; new && p < idx; p++)
	{
		if (p == idx - 1)
		{
			node->next = new->next;
			new->next = node;
			return (node);
		}
		else
			new = new->next;
	}

	return (NULL);
}


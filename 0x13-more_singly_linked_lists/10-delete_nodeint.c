#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a given
 * position of the index
 * @head: the first element pointer in the linked list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head;
	listint_t *curr_2 = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}

	while (k < index - 1)
	{
		if (!new || !(new->next))
			return (-1);
		new = new->next;
		k++;
	}


	curr_2 = new->next;
	new->next = curr_2->next;
	free(curr_2);

	return (1);
}


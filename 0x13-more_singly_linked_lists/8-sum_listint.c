#include "lists.h"

/**
 * sum_listint - add the sums of all of data of a linked list
 * @head: first node in the linked list
 *
 * Return: total sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *new = head;

	while (new)
	{
		sum += new->n;
		new = new->next;
	}

	return (sum);
}


#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list traverse
 *
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}


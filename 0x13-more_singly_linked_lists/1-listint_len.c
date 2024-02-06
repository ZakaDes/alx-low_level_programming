#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a listint_t list
 * @h: the head of the list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}

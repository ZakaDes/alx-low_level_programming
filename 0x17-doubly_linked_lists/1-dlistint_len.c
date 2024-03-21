#include "lists.h"

/**
 * dlistint_len - a function that returns the number of
 * elements in a dlistint_t list
 * @h: the head of the list
 *
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}

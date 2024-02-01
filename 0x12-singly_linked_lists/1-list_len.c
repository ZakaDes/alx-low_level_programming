#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{

		h = h->next;
	}

	return (i);
}

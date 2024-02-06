#include "lists.h"

/**
 * print_listint - a function that prints all the
 * elements of a listint_t list
 * @h: the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

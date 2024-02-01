#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: head of the list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	for (; h != NULL; i++)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");


		else
			printf("[%d] %s\n", h->len, h->str);


		h = h->next;
	}

	return (i);
}

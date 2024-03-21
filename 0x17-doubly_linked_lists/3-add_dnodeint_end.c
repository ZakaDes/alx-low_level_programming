#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list
 * @head: the head of the list
 * @n: the value
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, *nd;

	nd = malloc(sizeof(dlistint_t));

	nd->n = n;
	nd->next = NULL;
	t = *head;

	if (t != NULL)
	{
		while (t->next != NULL)
			t = t->next;

		t->next = nd;

	}
	else
	{
		*head = nd;
	}

	nd->prev = t;

	return (nd);
}

#include "lists.h"

/**
 * add_dnodeint - a function that adds a node
 * at the beginning of dlistint_t list
 * @head: the head of the list
 * @n: the value
 *
 * Return: the adress of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *t, *nd;

	nd = malloc(sizeof(dlistint_t));

	if (nd == NULL)
		return (NULL);

	nd->n = n;
	nd->prev = NULL;
	nd->next = NULL;

	if (*head == NULL)
	{
		nd->next = NULL;
		*head = nd;
		return (*head);
	}
	t = *head;
	nd->next = t;
	t->prev = nd;
	*head = nd;
	return (nd);


}

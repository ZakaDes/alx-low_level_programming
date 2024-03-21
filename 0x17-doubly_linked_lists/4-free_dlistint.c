#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: the head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}

#include "lists.h"

/**
 * free_listint2 - a function that free a listint_t list
 * the function sets the head to NULL
 * @head: the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

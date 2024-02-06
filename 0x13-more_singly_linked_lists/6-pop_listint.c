#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list
 * @head: the head of the listr
 *
 * Return: the head node's data(n) or 0 if empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}

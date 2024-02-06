#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: the head of the list
 *
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int i;

	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

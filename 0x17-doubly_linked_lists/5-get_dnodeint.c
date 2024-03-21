#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * of a dlistint_t linked list
 * @head: the head of the list
 * @index: the index
 *
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (index == count)
			return (head);

		count++;
		head = head->next;
	}

	return (NULL);


}

#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list
 * @head: the head of the list
 * @index: the index of the node, starting at 0;
 *
 * Return: NULL if it doesn't exist or pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
		{
			return (head);
		}
		head = (*head).next;

	}

	return (NULL);


}

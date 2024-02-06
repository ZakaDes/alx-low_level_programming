#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node at index
 * 'index' of a listint_t linked list
 * @head: head of the list
 * @index: the index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *adh, *temp = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}

	adh = temp->next;
	temp->next = adh->next;
	free(adh);
	return (1);
}

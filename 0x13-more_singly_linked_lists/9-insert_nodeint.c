#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position
 * @head: the head of the list
 * @idx: the index of the list
 * @n: the data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL || head == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
		{
			temp = temp->next;
		}
		i++;
	}
	return (NULL);
}

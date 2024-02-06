#include "lists.h"

/**
 * add_nodeint - a function that adds a node at
 * the beginningof a listint_t list
 * @head: the head of the list
 * @n: the data
 *
 * Return: the address of the new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);

	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);

}

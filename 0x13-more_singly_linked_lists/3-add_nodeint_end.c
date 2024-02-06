#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node at the end of
 * a listint_t list
 * @head: the head of the list
 * @n: the data
 *
 * Return: the address of the element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newNode;


	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;

		return (newNode);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = newNode;

	return (newNode);

}

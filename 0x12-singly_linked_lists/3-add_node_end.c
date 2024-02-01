#include "lists.h"

/**
 * add_node_end - a function that adds a node at the end of
 * a list_t list
 * @head: the head of the list
 * @str: the string to duplicate
 *
 * Return: the adress of the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;

		}

		temp->next = new_node;
	}

	return (new_node);
}

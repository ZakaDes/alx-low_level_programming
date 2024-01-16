#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to the newly allocated
 * space in memory, which contains a copy of the string given as parameter
 * @str: string to copy
 *
 * Return: NULL if it fails or a pointer to the copy of the string if
 * success
 */

char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	while (*str)
		*ptr++ = *str++;
	*ptr = '\0';

	return (ptr - i);
}

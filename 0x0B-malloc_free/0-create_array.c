#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initialize it
 * with a specific char
 * @size: the size of the array
 * @c: the char
 *
 * Return: NULL if size = 0, a pointer to the array or NULL if
 * failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptn;

	i = 0;

	if (size == 0)
		return (NULL);

	ptn = malloc(sizeof(char) * size);

	if (ptn == 0)
		return (NULL);

	while (i < size)
	{
		ptn[i] = c;
		i++;
	}

	return (ptn);

}

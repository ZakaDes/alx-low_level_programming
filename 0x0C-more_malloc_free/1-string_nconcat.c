#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i])
		i++;
	concat = malloc(sizeof(*concat) * i + n + 1);
	if (concat == NULL)
		return (NULL);
	for (j = 0, k = 0; j < (i + n); j++)
	{
		if (j < i)
			concat[j] = s1[j];
		else
			concat[j] = s2[k++];
	}
	concat[j] = '\0';
	return (concat);
}

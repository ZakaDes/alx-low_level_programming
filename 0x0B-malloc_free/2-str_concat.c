#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure, or a pointer to the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int total, i, j;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	total = i + j;
	str = malloc(sizeof(char) * total + 1);

	if (str == NULL)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';

	return (str - total);




}

#include "main.h"

/**
 * rev_string -  a function that reverses a string.
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	int j;
	char k = s[0];

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = 0; j < i; j++)
	{
		i--;
		k = s[j];
		s[j] = s[i];
		s[i] = k;

	}
}

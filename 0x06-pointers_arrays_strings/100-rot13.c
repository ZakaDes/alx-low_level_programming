#include <stdio.h>
#include "main.h"

/**
 * rot13 - encode a string using rot13
 * @s: input string
 *
 * Return: encoded string
 */


char *rot13(char *s)
{
	int i;
	int j;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == d1[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}

	return (s);
}

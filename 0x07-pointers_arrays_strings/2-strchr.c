#include "main.h"

/**
 * *_strchr -  a function that locates a character in a string
 * @s: string pointer
 * @c: first chara occurence
 *
 * Return: the first chara occurence in s or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;

	}

	return (0);
}

#include "main.h"

/**
 * *_strstr - a function that locates a substring.
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack != '\0')
	{
		while (haystack[i] != '\0' && needle[i] != '\0' && haystack[i] == needle[i])
		{
			i++;
		}

		if (needle[i] == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (0);
}

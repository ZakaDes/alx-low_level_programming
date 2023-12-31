#include "main.h"

/**
 * *_memset - a function that fills a memory with
 * constant byte.
 * @s: pointer
 * @b: constant byte
 * @n: the number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);

}

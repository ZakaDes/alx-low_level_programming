#include "main.h"

/**
 * *_memcpy - a function that copies a memeory area
 * @dest: the destination
 * @src: the source to copy
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}

#include "main.h"

/**
 * _strncat - concatenate two strings. Does not
 * need to be null terminated
 * @dest: first pointer
 * @src: second pointer
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenght = 0;
	int count;
	int i = 0;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}

	for (count = lenght; i < n && src[i] != '\0'; count++)
	{
		*(dest + count) = src[i];
		i++;
	}
	return (dest);

}

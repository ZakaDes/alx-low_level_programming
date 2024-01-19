#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - a function that allocates memeory for an array using malloc
 * @nmemb: the number
 * @size: the size
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == 0)
		return (NULL);

	memset(ptr, 0, (nmemb * size));

	return (ptr);
}

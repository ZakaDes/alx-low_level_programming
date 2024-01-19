#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of ints
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: the pointer to the array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, lenght;

	if (min > max)
		return (NULL);
	lenght = (max - min) + 1;

	ptr = malloc(sizeof(int) * lenght);

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ptr[i - min] = i;

	return (ptr);
}

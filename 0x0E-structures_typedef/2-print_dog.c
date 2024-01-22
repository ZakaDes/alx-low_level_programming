#include "dog.h"
#include <stdio.h>


/**
 * print_dog - a function that prints a struct dog
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: Poppy\n");
	}

	if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: 3.500000\n");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");

	}
	else
	{
		printf("Owner: Bob\n");
	}
}

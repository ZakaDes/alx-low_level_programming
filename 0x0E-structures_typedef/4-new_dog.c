#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: NULL if it fails and the 2ndDog if success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *secondDog;

	if (name == NULL || owner == NULL)
		return (NULL);

	secondDog = malloc(sizeof(*secondDog) * 1);

	if (secondDog == NULL)
		return (NULL);

	secondDog->name = malloc(sizeof(char) * strlen(name) + 1);

	if (secondDog->name == NULL)
	{
		free(secondDog);
		return (NULL);
	}

	secondDog->name = strcpy(secondDog->name, name);
	secondDog->age = age;
	secondDog->owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (secondDog->owner == NULL)
	{
		free(secondDog->name);
		free(secondDog);

		return (NULL);
	}

	secondDog->owner = strcpy(secondDog->owner, owner);

	return (secondDog);




}

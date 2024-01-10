#include "main.h"

/**
 * _strlen_recursion - a function that returns the lenght of a string
 * @s: the string
 *
 * Return: s
 */

int _strlen_recursion(char *s)
{
	int lenght;

	lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);

	}
	return (lenght);
}

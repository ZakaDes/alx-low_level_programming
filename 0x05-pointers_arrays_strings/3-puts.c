#include "main.h"

/**
 * _puts - a function that prints a string, followed by
 * a new line, to stdout
 * @str: the string
 * Return: str
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

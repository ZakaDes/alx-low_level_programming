#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: the string
 * Return: half of the input
 */

void puts_half(char *str)
{
	int len = 0;
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	j = (len / 2);

	if ((len % 2) == 1)
		j = ((len + 1) / 2);
	for (i = j; str[i] != '\0'; i++)

		_putchar(str[i]);

	_putchar('\n');
}

#include "main.h"

/**
 * print_line - Entry point
 * Draw a straight line in the terminal
 * @n: The number of times the character '_' should be printed
 * Return: the output
 */

void print_line(int n)
{
	int col;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (col = 1; col <= n; col++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

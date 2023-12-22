#include "main.h"

/**
 * print_square - Entry point
 * Print a square followed by a new line
 * @size: The size of the square
 * Return: the output
 */

void print_square(int size)
{
	int col;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= size; col++)
		{
			for (row = 1; row <= size; row++)
			{
				_putchar('#');

			}
			_putchar('\n');


		}

	}
}

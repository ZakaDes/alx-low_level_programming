#include "main.h"

/**
 * print_triangle - Entry point
 * Print a triangle followed by a new line
 * @size: The size of the triangle
 * Return: the output
 */

void print_triangle(int size)
{
	int row, col, sp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= size; col++)
		{
			for (sp = col; sp < size; sp++)
			{
				_putchar(' ');
			}

			for (row = 1; row <= col; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}


	}

}

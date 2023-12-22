#include "main.h"

/**
 * print_diagonal - Entry point
 * Draw a diagonal line on the terminal
 * @n: The number of times '\' should be printed
 * Return: The output
 */

void print_diagonal(int n)
{
	int col;
	int spa;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= n; col++)
		{
			for (spa = 1; spa < col; spa++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

#include <stdio.h>

/**
 * main - Entry point of the program
 * Print all single digit numbers starting from 0 with putchar
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point of the program
 * Print all letters except 'q' and 'e'
 * Return: 0 (success)
 */

int main(void)
{
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');





	return (0);
}

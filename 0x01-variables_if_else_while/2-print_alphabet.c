#include <stdio.h>

/**
 * main - Entry point of the program
 * Print the alphabet in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}

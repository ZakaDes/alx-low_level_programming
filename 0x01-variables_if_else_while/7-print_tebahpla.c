#include <stdio.h>

/**
 * main - Entry point of the the program
 * Print the alphabet in reverse
 * Return: 0 (success)
 */

int main(void)

{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

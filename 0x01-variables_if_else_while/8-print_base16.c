#include <stdio.h>

/**
 * main - Entry point
 * Print all numbers ofbase 16 using putchar
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

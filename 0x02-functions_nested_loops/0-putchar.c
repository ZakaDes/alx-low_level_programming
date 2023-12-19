#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	char putch[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(putch[i]);
	}
	putchar('\n');
	return (0);
}

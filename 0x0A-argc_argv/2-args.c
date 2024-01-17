#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: the count
 * @argv: the value
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

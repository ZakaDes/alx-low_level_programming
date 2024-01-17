#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: the count
 * @argv: the value
 *
 * Return: 0 (success)
 */

int main(int argc, __attribute((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

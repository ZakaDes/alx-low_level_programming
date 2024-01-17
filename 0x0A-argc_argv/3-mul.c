#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 * @argv: the value
 * @argc: the count
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int input1, input2;

	if (argc == 3)
	{
		input1 = atoi(argv[1]);
		input2 = atoi(argv[2]);

		printf("%d\n", input1 * input2);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

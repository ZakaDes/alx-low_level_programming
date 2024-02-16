#include "main.h"

/**
 * main - a program that copies the
 * content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int fr, fto, br, m, n;
	char buff[BUFFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fr = open(argv[1], O_RDONLY);

	if (fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't oread from file %s\n", argv[1]);
		exit(98);
	}
	fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((br = read(fr, buff, BUFFSIZE)) > 0)
	{
		if (fto == -1 || write(fto, buff, br) != br)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(fr);
			exit(99);
		}

	}
	if (br == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m = close(fr);
	n = close(fto);
	if (m == -1 || n == -1)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fto);

		exit(100);
	}
	return (0);
}

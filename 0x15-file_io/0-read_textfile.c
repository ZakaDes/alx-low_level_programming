#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters
 *
 * Return: the num of letters or 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, r, w;
	char *b;

	if (!filename || !letters)
		return (0);

	b = malloc(letters);

	if (!b)
		return (0);

	op = open(filename, O_RDONLY);
	r = read(op, b, letters);
	w = write(STDOUT_FILENO, b, r);

	if (op == -1 || r == -1 || !w || w != r)
	{
		free(b);
		return (0);
	}

	free(b);
	close(op);

	return (r);


}

#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int w, op, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}

	op = open(filename, O_WRONLY | O_APPEND);
	w = write(op, filename, len);

	if (w == -1 || op == -1)
		return (-1);

	close(op);

	return (1);
}

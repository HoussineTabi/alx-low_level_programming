#include "main.h"

/**
 * create_file - creates a file and writes a text on it
 * @filename: the name of the file
 * @text_content: the content to write in the file
 * Return: 1 if success or -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, j;
	int k;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY, 0600);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
	{
		k = strlen(text_content);
		j = write(i, text_content, k);
		if (k != j)
			return (-1);
	}
	j = close(i);
	if (j == -1)
		return (-1);
	return (1);
}

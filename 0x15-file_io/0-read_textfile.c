#include "main.h"

/**
 * read_textfile - this functions reads the data from files
 * @filename: the name of the file
 * @letters: the length of the letters that i want to write
 * Return: the number of number of liter that readen or 0 if something wrrong
 */
int read_textfile(const char *filename, unsigned int letters)
{
	char *buffer, *buff;
	int i = 0, j;

	if (filename == NULL || letters == 0)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	j = read(i, buffer, sizeof(*buffer) * letters);
	buff = buffer;
	if (i == 2)
	{
	while (*buff != '\0')
	{
		write(2, buff, 1);
		buff++;
	}
	}
	else
	{
		while (*buff != '\0')
		{
			write(1, buff, 1);
			buff++;
		}
	}
	j = close(i);
	free(buffer);
	if (j == -1)
		return (0);
	return (j);
}

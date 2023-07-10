#include "main.h"

/**
 * main - prints the infromation in the ELF header
 * @argc: the number of argument
 * @argv: the argument vector
 * Return: 1 success and -1 otherwise
 */

int main(int argc, char **argv)
{
	int i, j, nread, nwrite;
	char c[1024];

	if (argc != 3)
	{
		fprintf(stderr, "incorrect argument %d\n", argc);
		return (-1);
	}
	if (argv[1] == NULL || argv[2] == NULL)
		return (-1);
	i = open(argv[1], O_RDONLY);
	if (i == -1)
		return (-1);
	nread = read(i, c, sizeof(c));
	if (nread == -1)
		return (-1);
	j = close(i);
	if (j == -1)
		return (-1);
	i = open(argv[2], O_WRONLY | O_CREAT, 0664);
	if (i == -1)
		return (-1);
	nwrite = write(i, c, sizeof(c));
	if (nwrite == -1)
		return (-1);
	j = close(i);
	if (j == -1)
		return (-1);
	return (0);
}

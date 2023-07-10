#include "main.h"

/**
 * main - is a program that copy the content of a file to another file
 * @argc: the number of argument
 * @argv: the vecture of argument
 * Return: 0 if success and 97 or 98 or 99 or 100 otherwise
 */
int main(int argc, char **argv)
{
	int i, j, nread, nwrite;
	char c[1024];

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}
	i = open(argv[1], O_RDONLY);
	if (argv[1] == NULL || i == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	nread = read(i, c, sizeof(c));
	if (nread == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	j = close(i);
	if (i == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", i);
		exit(100);
	}
	i = open(argv[2], O_WRONLY | O_CREAT, 0664);
	nwrite = write(i, c, nread);
	if (argv[2] == NULL || i == -1 || nwrite != nread || nwrite == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	j = close(i);
	if (j == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", i);
		exit(100);
	}
	return (0);
}

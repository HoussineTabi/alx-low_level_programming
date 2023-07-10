#include "main.h"

/**
 * main - is a program that copy the content of a file to another file
 * @argc: the number of argument
 * @argv: the vecture of argument
 * Return: 0 if success and 97 or 98 or 99 or 100 otherwise
 */
int main(int argc, char **argv)
{
	FILE *fpf, *fpt;
	int i, j, s;
	char c[1024];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	fpf = fopen(argv[1], "r");
	i = fread(c, sizeof(char), sizeof(c), fpf);
	if (fpf == NULL || argv[1] == NULL || i == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	s = fclose(fpf);
	if (s != 0)
	{
		printf("Error: Can't close fd %d \n", s);
		exit(100);
	}
	fpt = fopen(argv[2], "w");
	j = fwrite(c, sizeof(char), i, fpt);
	if (fpt == NULL || argv[2] == NULL || j == -1)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	s = fclose(fpt);
	if (s != 0)
	{
		printf("Error: Can't close fd %d \n", s);
		exit(100);
	}
	chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	return (0);
}

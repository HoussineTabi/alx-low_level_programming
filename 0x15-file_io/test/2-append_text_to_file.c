#include "main.h"

/**
 * append_text_to_file - append a text int file
 * @filename: the name of the file
 * @text_content: the content to append
 * Return: return 1 success and 0 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "a");
	if (fp == NULL)
		return (-1);
	fputs(text_content, fp);
	fclose(fp);
	return (1);
}

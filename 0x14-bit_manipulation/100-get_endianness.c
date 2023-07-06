#include "main.h"

/**
 * get_endianness - if the storage start form the biggest
 * or from the lowerst number
 * Return: 1 if the machine is big endian or 0 if a littele
 */

int get_endianness(void)
{
	int n = 1;
	char *c = (char *)&n;

	if (*c - 48)
		return (1);
	return (0);
}

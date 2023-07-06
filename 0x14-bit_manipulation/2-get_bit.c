#include "main.h"

/**
 * get_bit - gets the nth bit of a number
 * @n: the number
 * @index: the index of the bit
 * Return: the bit or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if ((n == 1 && index != 0) || index > 64)
		return (-1);
	while (index != 0)
	{
		index--;
		n >>= 1;
	}
	if (index == 0)
		return (n & 1);
	return (-1);
}

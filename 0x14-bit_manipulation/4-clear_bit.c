#include "main.h"

/**
 * clear_bit - clears bit from a specified number
 * @n: a pointer number
 * @index: the index of the bit
 * Return: 1 if success or -1 else
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;
	unsigned int getindex = index;

	if (n == NULL || (*n == 1 && index != 0) || index > 64)
		return (-1);
	m = *n;
	while (getindex != 0)
	{
		getindex--;
		m >>= 1;
	}
	if (getindex != 0)
		return (-1);
	(*n) &= ~(1UL << index);
	return (1);
}

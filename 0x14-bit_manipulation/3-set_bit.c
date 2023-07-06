#include "main.h"

/**
 * set_bit - sets a bit to 1
 * @n: a pointer to the number
 * @index: the index to set 1
 * Return: 1 if success or 0 else
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;
	unsigned int count = index;

	if (n == NULL || index > 64)
		return (-1);
	if (*n == 1 && count != 0)
		return (0);
	m = *n;
	while (count != 0)
	{
		m >>= 1;
		count--;
	}
	if (count != 0)
		return (-1);
	(*n) |= (1UL << index);
	return (1);
}

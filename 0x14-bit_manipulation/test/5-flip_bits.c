#include "main.h"

/**
 * flip_bits - determine the  bits different in two number
 * @n: the first number
 * @m: the second number
 * Return: the number of bits different
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int m1, n1;

	while (n != 0 || m != 0)
	{
		n1 = (n & (1UL << 0));
		m1 = (m & (1UL << 0));
		if (m1 != n1)
			i++;
		m >>= 1;
		n >>= 1;
	}
	return (i);
}

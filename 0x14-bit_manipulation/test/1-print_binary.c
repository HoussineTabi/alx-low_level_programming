#include "main.h"

/**
 * print_binary - this function prints a number in binary form
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	unsigned int j = n & 1;

	if (n >> 1 != 0)
		print_binary(n >> 1);
	_putchar(j + '0');
}

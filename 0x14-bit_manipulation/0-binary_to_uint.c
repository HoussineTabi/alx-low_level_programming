#include "main.h"

/**
 * binary_to_uint - prints a number in binary form
 * @b: a string contain the form binary of a number
 * Return: the number in the case of success or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n, count = 1, convertedNumber = 0;

	if (b != NULL)
	{
		n = strlen(b);
		for (i = 0; i < n; i++)
		{
			if (b[n - 1 - i] == '0' || b[n - 1 - i] == '1')
				convertedNumber += ((unsigned int)b[n - i - 1] - 48) * count;
			else
				return (0);
			count *= 2;
		}
		return (convertedNumber);
	}
	return (0);
}

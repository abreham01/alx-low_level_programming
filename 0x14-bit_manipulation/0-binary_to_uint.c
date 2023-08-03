#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number
 *
 * Return: int value of binary
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int integer = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}

		integer = 2 * integer + (b[i] - '0');
	}
	return (integer);
}

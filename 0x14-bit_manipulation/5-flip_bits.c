#include "main.h"

/**
 * flip_bits - the number of bits needed to flip to get from one number to another.
 * @n: the first num
 * @m: the second num
 *
 * Return: the number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int difference = 0;

	n = n ^ m;

	while (n)
	{
		difference += n & 1;
		n >>= 1;
	}
	return (difference);
}

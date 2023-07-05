#include "main.h"

/**
 * _sqrt - returns the natural square root of a number.
 * @n: int
 * @i: int
 *
 * Return: the resulting square root
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}

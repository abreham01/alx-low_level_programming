#include "main.h"

/**
 * swap_int - swaps the values of two values.
 * @a: type int
 * @b: type int
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int holder = *a;
	*a = *b;
	*b = holder;
}

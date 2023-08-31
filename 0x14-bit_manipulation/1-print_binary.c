#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, binary_length = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			binary_length++;
		}

		else if (binary_length)
		{
			_putchar('0');
		}
	}
	if (!binary_length)
	{
		_putchar('0');
	}
}

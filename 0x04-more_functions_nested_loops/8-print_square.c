#include "main.h"

/**
* print_square - prints a size by size square
* @size: an int given by main
*
* Return: void. no return.
*/

void print_square(int size)
{
	int i, j;

	if (dimention <= 0)
		_putchar('\n');
	for (i = size; i > 0; i--)
	{
		for (j = dimention; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

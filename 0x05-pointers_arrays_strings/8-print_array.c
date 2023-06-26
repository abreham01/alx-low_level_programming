#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array of integers
 * @a: arry
 * @n: elements of array to be printed
 *
 * Return: 0 is success
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != n)
		{
			printf(", ");

		}
		else
		{
			printf(",");
		}
	}

	printf("\n");
}

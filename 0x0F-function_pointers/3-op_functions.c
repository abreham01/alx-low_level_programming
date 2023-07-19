#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add numbers
 * @a: number to be added
 * @b: number to be added
 *
 * Return: sum of numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract numbers
 * @a: number subsracted from
 * @b: number to be subtracted
 *
 * Return: the difference of the numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: number to be multiplied
 * @b: number to be multiplied
 *
 *  Return: product of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide numbers
 * @a: base number
 * @b: divider number
 *
 *  Return: result of division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - calculate remainder
 * @a: number to be divided
 * @b: dividing number
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

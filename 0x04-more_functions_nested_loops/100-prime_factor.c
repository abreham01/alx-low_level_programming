#include <stdio.h>
#include <math.h>

/**
* main - finds the largest prime factor of a number
*
* Return: 0
*/

int main(void)
{
	unsigned long int i;
	unsigned long int number = 612852475143;

	for (i = 3; i < 782849; i += 2)
	{
		while ((number % i == 0) && (number != i))
		{
			number = number / i;
		}
	}
	printf("%lu\n", number);
	return (0);
}

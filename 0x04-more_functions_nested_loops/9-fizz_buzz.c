#include<stdio.h>

/**
 * main - entry function
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if (num == 0)
		{
			printf("%i", num);
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (num % 3 == 0)
		{
			printf("Fizz");
		}

		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", num);
		}
		printf(" ");
	}
	printf("\n");
}

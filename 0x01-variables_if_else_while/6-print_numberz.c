#include<stdio.h>

/**
* main - Prints all numbers of base 10 using putchar
* Return: 0
**/

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}

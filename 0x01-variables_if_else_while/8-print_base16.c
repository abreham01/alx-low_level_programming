#include <stdio.h>

/**
* main - Prints all numbers of base 16
* Return: 0
**/

int main(void)
{
	int numbers;
	char letters;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		putchar(numbers);
	}

	for (letters = 'a'; letters <= 'f'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);
}

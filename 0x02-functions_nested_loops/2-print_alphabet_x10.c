#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet in lowercase ten times using only `_putchar`
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char letters = 'a';
	int count;

	for (count = 0; count < 10; count++)
	{

		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');

	}
}

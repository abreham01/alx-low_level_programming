#include "main.h"
/**
 * print_alphabet - Print alphabet in lowercase ten times using only `_putchar`
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char letters = 'a';
	int count = 0;

	while (count < 10)
	{

		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}
		_putchar('\n');

	}
}

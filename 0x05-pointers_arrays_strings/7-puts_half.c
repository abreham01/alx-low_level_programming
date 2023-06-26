#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int index = 0;
	int n;

	while (str[index] != '\0')
		{
			index++;
		}

	if (index % 2 == 0)
	{
		n = (index - 1) / 2;
	}

	else
	{
		n = (index / 2);
	}

	n++;

	for (index = n; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}

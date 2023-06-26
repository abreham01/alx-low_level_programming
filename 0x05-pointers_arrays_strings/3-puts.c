#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string type
 *
 * Return: 0 is success
 */
void _puts(char *str)
{
	int index;

	for (index = 0; *(str + index) != '\0'; index++)
	{
		_putchar(str[index] + '0');
	}

	_putchar('\n');
}

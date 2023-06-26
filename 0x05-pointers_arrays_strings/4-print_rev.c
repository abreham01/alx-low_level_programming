#include "main.h"

/**
 * print_rev - prints a string in a reverse order.
 * @s: string type
 *
 * Return: 0 is success
 */
void print_rev(char *s)
{
	int index;

	while (s[index] != '\0')
	{
		index++;
        }

	for (index--; index >= 0; index--)
	{
		_putchar(s[index]);
	}

	_putchar('\n');
}

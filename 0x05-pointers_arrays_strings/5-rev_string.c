#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reversed
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int index = 0, b, c;
	char d;

	while (s[index] != '\0')
	{
		index++;
	}

	c = index - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}

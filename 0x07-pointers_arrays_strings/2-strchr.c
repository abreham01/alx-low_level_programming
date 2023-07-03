#include "main.h"

/**
* _strchr- locates a char in a string
* @s: a pointer given by main
* @c: char
*
* Return: returns a pointer to the first occurance or null
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c)
	{
		i++;
	}

	if (c == 0)
	{
		return (s + i);
	}

	if (s[i] == 0)
	{
		return (0);
	}

	return(s + i);
}

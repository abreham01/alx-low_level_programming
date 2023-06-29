#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercass
 * @p: pointer to char
 *
 * Return: 0 is success
 */

char *string_toupper(char *p)
{
	int index;

	for (index = 0; p[index] != '\0'; index++)
	{
		if (p[index] >= 97 && p[index] <= 122)
			p[index] -= 32;
	}
	return (p);
}

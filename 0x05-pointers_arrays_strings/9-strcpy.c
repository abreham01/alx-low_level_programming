#include "main.h"

/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: char orgonal
 * @src: char copy
 *
 * Return: the copied char
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);
}

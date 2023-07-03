#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: char
 * @src: char
 * @n: unsigned int
 *
 * Return: 0 is success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

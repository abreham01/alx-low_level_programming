#include "main.h"

/**
 * *_strcat - concatinates two strings.
 * @dest: the first string strings
 * @src: the second string that will be appended to dest
 *
 * Return: a pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	int index1 = 0, index2;

	while (dest[index1] != '\0')
	{
		index1++;
	}

	for (index2 = 0; src[index2] != '\0'; index2++, index1++)
	{
		dest[index1] = src[index2];
	}

	return (dest);
}

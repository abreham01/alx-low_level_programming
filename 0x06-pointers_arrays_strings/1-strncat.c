#include "main.h"

/**
 * *_strncat - concatinates two strings.
 * @dest: the first string strings
 * @src: the second string that will be appended to dest
 * @n: number of chars will be appended
 *
 * Return: a pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index1 = 0, index2, max = 0;

	while (dest[index1] != '\0')
	{
		index1++;
	}

	while (src[max] != '\0')
	{
		max++;
	}

	for (index2 = 0; index2 < max && index2 < n; index2++, index1++)
	{
		dest[index1] = src[index2];
	}

	return (dest);
}

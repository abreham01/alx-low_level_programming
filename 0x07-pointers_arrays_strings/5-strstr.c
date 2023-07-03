#include "main.h"

/**
 * _strstr - ffind the first occurrence
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to needle or NULL if no byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		char *string = haystack;
		char *substring = needle;

		while (*haystack == *substring && *substring != 0 && *haystack != 0)
		{
			haystack++;
			substring++;
		}

		if (*substring == 0)
		{
			return (string);
		}
		haystack = ++string;
	}
	return (0);
}

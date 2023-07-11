#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(c) * size);

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		pointer[i] = c;
	}

	return (pointer);
}

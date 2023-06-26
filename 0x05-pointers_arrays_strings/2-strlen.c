#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 *
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int stringLength = 0;

	for (; *s++;)
	{
		stringLength++;
	}
	return (stringLength);
}i

#include "main.h"
#include <stdio.h>

/**
* _isdigit - returns 1 if digit, 0 if not
* @c: an int given by the main function
*
* Return: 1 if digit , 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

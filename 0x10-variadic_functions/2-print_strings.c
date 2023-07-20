#include "variadic_functions.h"

/**
 * print_strings - Print numbers using a separator
 * @separator: The string separator
 * @n: The quantity of numbers
 * @...: The list of numbers
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ps;

	va_list valist;
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}

		ps = va_arg(valist, char *);

		if (ps == NULL)
		{
			printf("(nil");
		}

		printf("%s", ps);
	}
	
	printf("\n");
	va_end(valist);
}

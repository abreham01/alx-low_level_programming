#include <stdio.h>

/**
 * main - Prints all args.
 * @argc: The number of argumets
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

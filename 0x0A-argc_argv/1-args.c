#include <stdio.h>

/**
* main - prints number of args
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Return: returns 0 if it works
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

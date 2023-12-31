#include <stdio.h>
#include <stdlib.h>

/**
* main - multiples two args
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Return: returns 0 if it works and 1 if it fails
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

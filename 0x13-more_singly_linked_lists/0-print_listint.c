#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements in listint.
 * @h: Pointer to a listint
 *
 * Return: number of elemets printed.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t counter = 0;

	ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		counter++;
		ptr = ptr->next;
	}

	return (counter);
}

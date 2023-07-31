#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements in listint.
 *
 * @h: Pointer to a listint
 *
 * Return: number of elemets printed.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int counter = 0;

	tp = h;

	while (tp)
	{
		printf("%d\n", tp->n);
		counter++;
		tp = tp->next;
	}

	return (counter);
}

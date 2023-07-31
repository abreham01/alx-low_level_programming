#include "lists.h"

/**
 * listint_len - Returns the length of list.
 * @h: Pointer to a list.
 * 
 * Return: the length of list.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int counter = 0;

	tp = h;
	while (tp)
	{
		counter++;
		tp = tp->next;
	}
	return (counter);
}

#include "lists.h"

/**
 * listint_len - Returns the length of list.
 * @h: Pointer to a list.
 *
 * Return: the length of list.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int counter = 0;

	ptr = h;
	while (ptr)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}

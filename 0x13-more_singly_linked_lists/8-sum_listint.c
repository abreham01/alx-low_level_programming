#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - return the sum of  all elements in elements in the list.
 * @head: Address of the first node of the list.
 *
 * Return: the sum list.
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;
	const listint_t *ptr;

	ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}

#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in a list.
 * @head: Address of the first node in a list.
 * @index: Position of a the node to find (starting from 0).
 *
 * Return: Node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}

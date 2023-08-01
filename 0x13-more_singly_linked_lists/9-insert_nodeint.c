#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 *
 * Return: Address of the new node or null.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptrnew;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}

	if (idx != 0)
	{
		ptr = *head;

		while (i < idx - 1 && ptr != NULL)
		{
			temp = temp->next;
			i++;
		}

		if (ptr == NULL)
		{
			return (NULL);
		}
	}

	ptrnew = malloc(sizeof(listint_t));

	if (ptrnew == NULL)
	{
		return (NULL);
	}

	ptrnew->n = n;

	if (idx == 0)
	{
		ptrnew->next = *head;
		*head = ptrnew;
		return (ptrnew);
	}

	ptrnew->next = ptr->next;
	ptr->next = ptrnew;
	return (ptrnew);
}

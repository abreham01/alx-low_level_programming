#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 *
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);


	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}


	while (ptr->next)
	{
		ptr = ptr->next;
	}

	ptr->next = temp;

	return (temp);
}

#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert into the new node.
 *
 * Return: Address of the new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	tp = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

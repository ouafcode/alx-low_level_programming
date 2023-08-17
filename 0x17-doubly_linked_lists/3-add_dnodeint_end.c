#include "lists.h"

/**
 * add_dnodeint_end - dds a new node at the end of a dlistint_t list
 * @head: a ptr to the head of list
 * @n: int for new node
 *
 * Return: Null if function fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *tmp;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = ptr;
	ptr->prev = tmp;
	return (ptr);
}

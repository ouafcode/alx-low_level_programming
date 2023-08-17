#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: ptr to list
 * @idx: index of new node
 * @n: value of new node
 *
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *tmp;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	tmp = *h;
	i = 0;
	if (idx == 0)
	{
		ptr = malloc(sizeof(dlistint_t));
		if (ptr == NULL)
			return (NULL);
		ptr->n = n;
		ptr->next = *h;
		ptr->prev = NULL;
		if (*h != NULL)
			(*h)->prev = ptr;
			*h = new;
			return (new);
	}
	while (ptr != NULL)
	{
		if (i == idx - 1)
		{
			ptr = malloc(sizeof(dlistinit_t));
			if (ptr == NULL)
				return (NULL);
			ptr->n = n;
			ptr->next = ptr->next;
			ptr->prev = tmp;
			tmp->next = ptr;
			if (ptr->next != NULL)
				ptr->next->prev = ptr;
				return (ptr);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}

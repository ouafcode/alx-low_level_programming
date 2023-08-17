#include "lists.h"

/**
 * get_dnodeint_at_index - return  the nth node of a dlistint_t linked list
 * @head: ptr to list
 * @index: index of node
 *
 * Return: return address of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i;

	p = head;
	i = 0;
	if (head == NULL)
		return (NULL);
	while (p != NULL)
	{
		if (i == index)
			return (p);
		p = p->next;
		i++;
	}
	return (NULL);
}

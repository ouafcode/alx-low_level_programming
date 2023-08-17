#include "lists.h"

/**
 * dlistint_len - returns the number of elements in dlistint_t list
 * @h : head
 *
 * Return : nmr of element in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *p = h;

	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}

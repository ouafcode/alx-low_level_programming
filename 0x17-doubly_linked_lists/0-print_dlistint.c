#include "lists.h"

/**
 * print_dlistint - to print all element
 * @h : head of list
 *
 * Return: nbr of node in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *p = h;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}

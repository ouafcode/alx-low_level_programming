#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - prints all the elements of listint_t list
 * @h: pointer point to listint_t structer
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}

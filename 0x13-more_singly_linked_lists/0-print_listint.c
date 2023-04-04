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
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d \n", temp->n);
		temp = temp->next;
		x++;
	}
	return (x);
}

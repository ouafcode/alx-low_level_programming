#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - to calculate sum of all the data(n)
 * @head: point to starter node
 *
 * Return: return the sum of all data in linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}

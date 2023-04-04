#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete the head node
 * @head: pointer to pointer that point to listint_t
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	(*head) = temp;

	return (i);
}

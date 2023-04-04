#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - to frees a listint_t structure
 * @head: pointer head to start node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}

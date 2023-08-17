#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: ptr to list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}

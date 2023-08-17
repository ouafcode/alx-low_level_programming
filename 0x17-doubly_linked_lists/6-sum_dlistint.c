#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: ptr to the head of list
 *
 * Returm: return 0 if list empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p;
	int sum = 0;

	p = head;
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: pointer point the starter node
 * @index: the index of the node
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr ? ptr : NULL);
}

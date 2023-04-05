#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: double pointer to the starter mode
 * @index: the index of node should be deleted
 *
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = NULL;
	listint_t *temp = *head;
	unsigned int p = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (p < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		p++;
	}

	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);

	return (1);
}

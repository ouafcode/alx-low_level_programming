#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer that point the starter node
 * @idx: the index of list
 * @n: integer
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *ptr;
	listint_t *temp = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !head)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	for (p = 0; temp && p < idx; p++)
	{
		if (p == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (temp);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

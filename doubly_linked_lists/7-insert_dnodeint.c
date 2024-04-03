#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of list
 * @idx: position
 * @n: int data to add
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int limit = 0, num = 0;
	dlistint_t *new, *ditto, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*h != NULL)
	{
		temp = *h;
		while (temp->next != NULL)
		{
			temp = temp->next;
			limit++;
		}
	}
	if (idx > limit)
		return (NULL);

	ditto = *h;
	while (num < idx)
	{
		num++;
		ditto = ditto->next;
	}
	new->prev = ditto;
	new->n = n;
	new->next = ditto->next;
	ditto->next = new;
	new->next->prev = new;
	return (new);
}

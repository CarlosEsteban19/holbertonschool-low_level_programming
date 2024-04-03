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
	dlistint_t *new, *ditto;

	if (idx == 0)
		return (add_dnodeint(h, n));

	ditto = *h;
	while (idx != 1)
	{
		ditto = ditto->next;
		if (ditto == NULL)
			return (NULL);
		idx--;
	}

	if (ditto->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = ditto;
	new->next = ditto->next;
	ditto->next = new;
	new->next->prev = new;
	return (new);
}

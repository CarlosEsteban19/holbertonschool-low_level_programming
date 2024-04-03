#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: beginning of list
 * @n: int data
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ditto;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		ditto = *head;
		while (ditto->next != NULL)
			ditto = ditto->next;
		new->prev = ditto;
		ditto->next = new;
	}

	return (new);
}

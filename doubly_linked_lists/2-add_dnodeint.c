#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list
 * @head: beginning of list
 * @str: new string
 * Return: list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

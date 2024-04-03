#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a list
 * @head: beggining of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ditto;

	while (head != NULL)
	{
		ditto = head;
		head = head->next;
		free(ditto);
	}
	free(head);
}

#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a doubly list
 * @head: beginning of list
 * @index: node to return
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int limit = 0, num = 0;
	dlistint_t *ditto;

	ditto = malloc(sizeof(dlistint_t));
	if (ditto == NULL)
		return (NULL);

	if (head != NULL)
	{
		ditto = head;
		while (ditto->next != NULL)
		{
			ditto = ditto->next;
			limit++;
		}
	}
	if (index > limit)
		return (NULL);
	else if (num < index)
		while (num < index)
		{
			head = head->next;
			num++;
		}
	return (head);
}

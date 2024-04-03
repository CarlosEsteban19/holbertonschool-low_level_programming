#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a doubly list
 * @head: beginning of list
 * @index: node to return
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (num < index)
	{
		head = head->next;
		num++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}

#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index of list
 * @head: start of list
 * @index: position of node to delete
 * Return: 1 on succes, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *temp2 = NULL;

	if (*head == NULL)
		return (-1);

	if (index <= 1)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (index >= 1)
	{
		temp = temp->next;
		index--;
		if (temp == NULL)
			return (-1);
	}

	if (temp->next == NULL)
	{
		temp2 = temp->prev;
		temp2->next = NULL;
		free(temp);
		return (1);
	}

	else
	{
		temp2 = temp->prev;
		temp2->next = temp->next;
		temp->next->prev = temp2;
		free(temp);
		return (1);
	}

	return (-1);
}

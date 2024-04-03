#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: beggining of list
 */
void free_list(list_t *head)
{
	list_t *ditto;

	while (head != NULL)
	{
		ditto = head;
		head = head->next;
		free(ditto->str);
		free(ditto);
	}
	free(head);
}

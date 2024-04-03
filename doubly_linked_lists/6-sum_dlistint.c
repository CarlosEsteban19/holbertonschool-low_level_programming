#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a doubl list
 * @head: list
 * Return: sum as integer
 */
int sum_dlistint(dlistint_t *head)
{
	int num = 0;

	while (head != NULL)
	{
		num += head->n;
		head = head->next;
	}
	return (num);
}

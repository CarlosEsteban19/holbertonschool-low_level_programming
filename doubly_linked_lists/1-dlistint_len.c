#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len - number of elements of a doubly list
 * @h: doubly list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}

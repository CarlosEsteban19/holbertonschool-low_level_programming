#include "lists.h"
#include <stddef.h>
/**
 * list_len - numer of elements of a list
 * @h: list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}

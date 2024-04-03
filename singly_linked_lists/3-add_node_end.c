#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - Calculates the length of the string
 * @s: The stirng being measured
 * Return: int (Success)
 */
int _strlen(const char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{}
	return (l);
}
/**
 * add_node_end - adds a new node at the end of a list
 * @head: beginning of list
 * @str: new string
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ditto;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		ditto = *head;
		while (ditto->next != NULL)
			ditto = ditto->next;
		ditto->next = new;
	}

	return (new);
}

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
 * add_node - adds a new node at the beginning of a list
 * @head: beginning of list
 * @str: new string
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

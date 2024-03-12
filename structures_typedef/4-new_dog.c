#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: lenght of string.
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;

	return (lenght);
}
/**
 * *_strcpy - copies the string pointed to by src, to dest.
 * @src: includes content to be copied
 * @dest: destination of content
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index;
	int size = 0;

	while (src[size] != '\0')
		size++;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];
	dest[index] = '\0';

	return (dest);
}
/**
 * *new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: doggie
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namesize = 0;
	int ownersize = 0;
	dog_t *doggie;

	if (name != NULL && owner != NULL)
	{
		namesize = _strlen(name) + 1;
		ownersize = _strlen(owner) + 1;


		doggie = malloc(sizeof(dog_t));
		if (doggie == NULL)
			return (NULL);

		doggie->name = malloc(namesize * sizeof(char));
		if (doggie->name == NULL)
		{
			free(doggie);
			return (NULL);
		}

		doggie->owner = malloc(ownersize * sizeof(char));
		if (doggie->owner == NULL)
		{
			free(doggie->name);
			free(doggie);
			return (NULL);
		}
	}
	doggie->name = _strcpy(doggie->name, name);
	doggie->owner = _strcpy(doggie->owner, owner);
	doggie->age = age;

	return (doggie);
}

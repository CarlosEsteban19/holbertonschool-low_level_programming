#include "main.h"

/**
 * _strspn - gets the lenght of prefix substring
 * @s:string
 * @accept: bytes
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int size;
	unsigned int count = 0;
	unsigned int length = 0;

	for (size = 0; s[size] != '\0'; size++)
	{
		if (accept[count] == '\0')
			return (length);

		for (count = 0; accept[count] != '\0'; count++)
		{
			if (s[size] == accept[count])
			{
				length++;
				break;
			}
		}
	}
	return (length);
}

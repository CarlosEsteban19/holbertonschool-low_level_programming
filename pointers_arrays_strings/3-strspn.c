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
	unsigned int count;
	unsigned int length = 0;

	for (size = 0; s[size] != '\0'; size++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (s[size] == accept[count])
			{
				length++;
				break;
			}
		}
	}
	return (length - 2);
}

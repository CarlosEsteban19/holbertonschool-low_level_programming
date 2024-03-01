#include "main.h"

/**
 * *leet - encodes a string to the famous 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	char letras[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	int size;
	int count;

	for (size = 0; s[size] != '\0'; size++)
	{
		for (count = 0; letras[count] != '\0'; count++)
		{
			if (s[size] == letras[count])
			{
				s[size] = nums[count];
				break;
			}
		}
	}
	return (s);
}

#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: string to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int size;
	int count;

	for (size = 0; s[size] != '\0'; size++)
	{
		for (count = 0; alpha[count] != '\0'; count++)
		{
			if (s[size] == alpha[count])
			{
				s[size] = rot[count];
				break;
			}
		}
	}
	return (s);
}

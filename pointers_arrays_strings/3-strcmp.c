#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * return: difference between 1st pair of chars that dont match.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	diff = s1[0] - s2[0];
	while (diff == 0)
	{
		if (s1[i] == '\0') break;
		i++;
		diff = s1[i] - s2[i];
	}
	return (diff);
}

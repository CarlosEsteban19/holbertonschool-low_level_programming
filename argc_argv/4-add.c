#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int count;
	int index;

	if (argc > 1)
	{
		for (count = 1; argv[count] != NULL; count++)
		{
			for (index = 0; argv[count][index] != '\0'; index++)
			{
				if (isdigit(argv[count][index]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[count]);
		}
	}
	printf("%d\n", result);
	return (0);
}

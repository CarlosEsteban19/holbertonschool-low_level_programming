#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int total;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	total = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", total);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @n: elements in array
 * @a: array of elements
 */
void print_array(int *a, int n)
{
	int size = 0;
	int limit = 0;

	while (a[size] != 0)
		size++;

	while (limit < n)
	{
		printf("%d", a[limit]);
		limit++;

		if (limit != n)
			printf(", ");
	}
	printf("\n");
}

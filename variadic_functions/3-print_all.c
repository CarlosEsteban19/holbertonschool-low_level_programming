#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints chars
 * @args: source
 */
void print_c(va_list *args)
{
	printf("%c", va_arg(*args, int));
}
/**
 * print_s - prints string
 * @args: source
 */
void print_s(va_list *args)
{
	char *string;

	string = va_arg(*args, char *);
	if (string == NULL)
		string = "(nil)";

	printf("%s", string);
}
/**
 * print_i - prints integer
 * @args: source
 */
void print_i(va_list *args)
{
	printf("%d", va_arg(*args, int));
}
/**
 * print_f - prints float
 * @args: source
 */
void print_f(va_list *args)
{
	printf("%f", va_arg(*args, double));
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	mytype array[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL},
	};

	int i;
	int j = 0;
	va_list args;

	va_start(args, format);

	while (format[j] != '\0')
	{
		i = 0;
		while (array[i].letra != NULL)
		{
			if (*array[i].letra == format[j])
			{
				array[i].f(args);
			}
			i++;
		}
		j++;
	}
	va_end(args);
	printf("\n");
}

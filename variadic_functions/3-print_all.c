#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_one - prints one argument based on format char
 * @c: format character
 * @boite: va_list
 */
void print_one(char c, va_list boite)
{
	char *stock;

	switch (c)
	{
	case 'c':
		printf("%c", va_arg(boite, int));
		break;
	case 'i':
		printf("%d", va_arg(boite, int));
		break;
	case 'f':
		printf("%f", va_arg(boite, double));
		break;
	case 's':
		stock = va_arg(boite, char *);
		printf("%s", stock ? stock : "(nil)");
		break;
	default:
		break;
	}
}

/**
 * print_all - prints anything according to format
 * @format: list of types: c=char, i=int, f=float, s=string
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list boite;
	unsigned int i = 0;

	va_start(boite, format);

	while (format && format[i])
	{
		print_one(format[i], boite);

		if (format[i + 1] &&
		    (format[i] == 'c' || format[i] == 'i' ||
		     format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(boite);
}

#include "main.h"
#include <stdio.h>

/**
 * ecrire 1 - 9
 *
 * return toujour rien
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}

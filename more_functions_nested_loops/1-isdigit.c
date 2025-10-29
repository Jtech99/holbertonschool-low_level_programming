#include "main.h"
#include <stdio.h>

/**
 * _isdigit - vérifie si un caractère est en majuscule
 * @c: caractère à tester
 *
 * Return: 1 si majuscule, 0 sinon
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

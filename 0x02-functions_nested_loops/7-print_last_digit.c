#include "main.h"

/**
 * print_last_digit - print the last digit of n.
 *@n: integer.
 *
 * Return: result.
 */

int print_last_digit(int n)
{
	int f = n % 10;

	if (n < 0)
{
	f = f * -1;
}
	_putchar('0' + f);
	return (f);
}

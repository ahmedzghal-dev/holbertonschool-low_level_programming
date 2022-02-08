#include "main.h"
/**
 * print_sign - check the code.
 *@n: c is an integer
 *
 * Return: 1 if n (+), 0 if n is zero and -1 if n is less than zero.
 */
int print_sign(int n);
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchat('0');
	return (0);
	}
}


#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet
 *
 * Return: Always return void.
 */
void print_alphabet_x10(void)
{

	char i;

	for (i = 'a' ; i <= 'z'; i++)
	{
	_putchar(i * 10);
	}
	_putchar('\n');
}

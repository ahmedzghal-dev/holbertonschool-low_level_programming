#include "main.h"
/**
 * print_rev - check the code.
 * @s: character.
 */
void print_rev(char *s)
{
	int i;

	for (i = *s; i > 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar(10);
}

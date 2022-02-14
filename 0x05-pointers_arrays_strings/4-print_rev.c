#include "main.h"
/**
 * print_rev - check the code.
 * @s: character.
 */
void print_rev(char *s)
{
	int i, n = 0;
	char *l;

	for (l = s; *l; l++)
	n += 1;
	for (i = n-1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar(10);
}

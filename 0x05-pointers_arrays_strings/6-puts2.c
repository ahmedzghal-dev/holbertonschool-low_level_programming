#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i, n = 0;
	char *l;

	for (l = str; *l; l++)
		n += 1;
	for (i = 0; i < n; i++)
	{
		if (i%2==0)
			_putchar(str[i]);
	}
	_putchar(10);
}

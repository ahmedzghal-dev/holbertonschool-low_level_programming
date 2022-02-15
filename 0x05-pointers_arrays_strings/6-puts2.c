#include "main.h"

/**
 * puts2 - check the code
 *@str: character.
 */
void puts2(char *str)
{
	char i;
	int j = 0;

	for (i = str; i; i++)
	{
	if (j % 2 == 0)
	{
	_putchar(str[i]);
	j + 1;
	}
	}
	_putchar(10);
}

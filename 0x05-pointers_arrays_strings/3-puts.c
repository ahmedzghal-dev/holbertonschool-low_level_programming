#include "main.h"

/**
 * _puts - check the code.
 * @str: character.
 *
 * Return: length of a string.
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	_putchar(10);
}

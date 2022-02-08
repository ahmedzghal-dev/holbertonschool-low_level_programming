#include "main.h"
/**
 * main - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	int i;
	char *str;

	str = "_putchar\n";
	for (i = 0 ; i <= 8; i++)
	{
	_putchar(str[i]);
	}
	return (0);
}

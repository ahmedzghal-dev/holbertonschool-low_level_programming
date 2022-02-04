#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; ++n)
{
	putchar('0' + n);
	if (n < 9)
	{
	putchar(',');
	putchar(' ');
	}
}
	putchar('\n');
	return (0);
}

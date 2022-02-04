#include <stdlib.h>
#include <time.h>
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

	/* your code goes there */
	for (n = '0'; n <= '9'; ++n)
	{
	putchar(n);
	}
	for (n = 'a'; n <= 'f'; ++n)
	{
	putchar(n);
	}
	putchar('\n');

	return (0);
}

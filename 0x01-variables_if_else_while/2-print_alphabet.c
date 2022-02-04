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
	char c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (c = 'a'; c <= 'z'; ++c) {
		putchar(c);
	}
	 
	return (0);
}

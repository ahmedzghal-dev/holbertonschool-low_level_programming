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
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	printf("Last digit of %d is %ld is greater than 5 \n", n);
	else if (n < 6 )
	printf("Last digit of %d is %ld is less than 6 and not 0\n", n);
	else
	printf("%d is zero\n", n);
	ld = num % 10;

	return (0);
}

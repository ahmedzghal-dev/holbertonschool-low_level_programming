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
	int n, ld;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	/* your code goes there */
	if (ld > 5)
	printf("Last digit of %d is %ld is greater than 5\n", n, ld);
	else if (ld < 6 && ld !=0 )
	printf("Last digit of %d is %ld is less than 6 and not 0\n", n,ld);
	else
	printf("%ld is zero\n", n);
	return (0);
}
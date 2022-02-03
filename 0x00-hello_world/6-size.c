#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int integerType;
	long int longintegerType;
	long long int longlongintegerType;
	float floatType;

	printf("Size of char is: %ld byte(s)\n", sizeof(charType));
	printf("Size of int is: %ld byte(s)\n", sizeof(integerType));
	printf("Size of long int is: %ld byte(s)\n", sizeof(longintegerType));
	printf("Size of long long int is: %ld byte(s)\n", sizeof(longlongintegerType));
	printf("Size of float is: %ld byte(s)\n", sizeof(floatType));

	return (0);
}

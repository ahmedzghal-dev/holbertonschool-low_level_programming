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

	printf("Size of char is: %ld\n",sizeof(charType));
	printf("Size of int is: %ld\n",sizeof(integerType));
	printf("Size of long int is: %ld\n",sizeof(longintegerType));
	printf("Size of long long int is: %ld\n",sizeof(longlongintegerType));
	printf("Size of float is: %ld\n",sizeof(floatType));

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
<<<<<<< HEAD
 *main - check the code
 *@argc:argument counter
 *@argv:argument value
 *@i: integer
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a,b,mul;
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a*b;

	if (argc > 0)
    {
	printf("%d\n", argc,mul);
    }
	return 0;
}
=======
 * main - multiplies two number arguments
 * @argc: argument count
 * @argv: arguemnt array
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
>>>>>>> 6ac1fa81d3b00c55a4d8c8f469595b56a7b2b693

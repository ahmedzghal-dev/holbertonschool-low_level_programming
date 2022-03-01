#include <stdio.h>
#include <stdlib.h>
/**
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
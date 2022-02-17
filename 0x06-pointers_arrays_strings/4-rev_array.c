#include "main.h"

/**
 *_strcmp - check the code
 *@a: pointer
 *@n: integer
 *
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;
	int j = n - 1;
	while (i < j)
	{
	tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
	i++;
	j--;
	}
}

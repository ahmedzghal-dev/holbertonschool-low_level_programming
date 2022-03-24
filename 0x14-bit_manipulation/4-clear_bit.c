#include "main.h"
#include <stdio.h>
/**
 * clear_bit - check the code
 *@n: unsigned long int
 *@index: unsigned int
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = ~(1 << index);

	if (index < 64)
	{	*n &= mask;
		return (1);
	}
	return (-1);
}

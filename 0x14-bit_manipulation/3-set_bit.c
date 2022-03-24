#include "main.h"
#include <stdio.h>
/**
 *set_bit - check the code
 *@n: unsigned long int
 *@index: unsigned int
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;
	int result;


	if (index > 64)
		return (-1);

	result = *n |= mask;

	if (result)
		return (1);
	else
		return (-1);
}

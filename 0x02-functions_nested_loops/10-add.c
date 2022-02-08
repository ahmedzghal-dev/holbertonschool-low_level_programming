#include "main.h"
/**
 * add - check the code
 *
 * Return: return the sum of a an b .
 */

int add(int a, int b)
{
	return (int)&(  ( (char *)a )[b] );
}

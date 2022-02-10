#include "main.h"

/**
 * _isupper - alphabet checker.
 * @c: integer
 *
 * Return: if c uppercase print 1, else print 0.
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
	return (0);
	else
	return (1);
}

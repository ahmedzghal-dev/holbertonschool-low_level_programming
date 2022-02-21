#include "main.h"

/**
 *_memset - check the code
 *@s: pointer
 *@b: character
 *@n: insigned integer
 *
 * Return: always s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n--)
	{
		*i++ = b;
	}
	return (s);
}

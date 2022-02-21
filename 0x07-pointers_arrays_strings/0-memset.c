#include "main.h"

/**
 * *_memset - check the code
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while(n--)
	{
		*i++ = b;
	}
	return (s);
}

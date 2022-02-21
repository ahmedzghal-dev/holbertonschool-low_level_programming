#include "main.h"

/**
 *_memcpy - check the code
 *@dest: pointer
 *@src: character
 *@n: insigned integer
 *
 * Return: always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char j = n;
	char *t = (char *) dest;
	char *s = (char *) src;

	for (i = 0; i < j; i++)
	{
		t[i] = s[i];
	}
	return (dest);
}


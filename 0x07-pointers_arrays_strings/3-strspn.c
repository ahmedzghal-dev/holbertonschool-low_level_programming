#include "main.h"

/**
 *_strspn - check the code
 *@s: pointer
 *@accept: character
 *
 * Return: always s
 */
unsigned int _strspn(char *s, char *accept)
{
	int n;
	const char *p;

	for (n = 0; *s; s++, n++)
	{
		for (p = accept; *p && *p != *s; p++)
			;
		if (!*p)
			break;
	}
	return (n);
}

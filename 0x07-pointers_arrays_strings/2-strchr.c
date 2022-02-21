#include "main.h"

/**
 *_strchr - check the code
 *@s: pointer
 *@c: character
 *
 * Return: always s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (char*)s;
		}
	} while (*s++);
	return (s);
}

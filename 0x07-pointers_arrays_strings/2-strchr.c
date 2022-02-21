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
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}

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
	for (; *s != '\0'; ++s)
	{
		if (*s = c)
		break;
	}
	return (s);
}

#include "main.h"

/**
 * _isalpha - alphabetic char checker
 * @c: c is one character
 *
 *Return: 1 if c is a letter lowercase or uppercase.else returns 0
 */
int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
	else
	return (0);
}

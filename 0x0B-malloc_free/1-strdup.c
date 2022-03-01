#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - creates an array of chars
 * @str: pointer

 *
 * Return: always 0.
 */
char *_strdup(char *str)
{
    char *p;
    unsigned int i;

    
    if(str == NULL)
    {
        return (NULL);
    }
    
	p = (char *)malloc(sizeof(char) * strlen(str) + 1);
    if(p == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < strlen(str); i++)
    p[i] = str[i];
    return (p);
	
}
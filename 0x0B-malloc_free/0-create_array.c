#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @unsigned: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: always 0.
 */
char *create_array(unsigned int size, char c)
{
    
	char *b = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (b == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
		return (b);
}
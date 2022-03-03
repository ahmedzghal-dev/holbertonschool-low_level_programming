#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
<<<<<<< HEAD
 * create_array - creates an array of chars
 * @unsigned: the address of memory to print
=======
 * create_array - check the code
>>>>>>> dd23b8f637e59f5dae4d0a057abecc3b89e2d611
 * @size: the size of the memory to print
 *@c: character
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

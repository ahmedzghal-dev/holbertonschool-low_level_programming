#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *  list_len - count the elements of the list
 * @h: pointer to next element
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
int count = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

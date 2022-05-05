#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the length of the list
 * @h: pointer to the list
 *
 * Return: count list length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
	h = h->next;
	}
	return (cnt);
}

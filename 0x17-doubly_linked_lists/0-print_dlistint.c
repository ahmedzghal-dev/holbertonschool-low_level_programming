#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *print_listint - prints the list members
 *@h: pointer to list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t cnt = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		cnt++;
	}
	return (cnt);
}
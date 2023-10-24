#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the elements of listint_t list
 * @h: pointer to head of list_t list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n;
		h = h->next;
	}

	return (nodes);
}

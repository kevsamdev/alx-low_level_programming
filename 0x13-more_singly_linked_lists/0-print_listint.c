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
		char buffer[12];
		int n = snprintf(buffer, sizeof(buffer), "%d\n", h->n;
write(STDOUT_FILENO, buffer, n);
		h = h->next;
	}

	return (nodes);
}

#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Linked list of type listint_t to print
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t num = 0;

    while (h)
    {
        // Use the write function to write to standard output
        char buffer[12]; // Assuming integers won't exceed 11 characters
        int n = snprintf(buffer, sizeof(buffer), "%d\n", h->n);
        write(STDOUT_FILENO, buffer, n);
        num++;
        h = h->next;
    }

    return num;
}

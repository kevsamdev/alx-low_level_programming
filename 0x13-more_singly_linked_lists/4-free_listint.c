#include "lists.h"

/**
 * free_listint - This frees a linked list
 * @head: The listint_t list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
free(head);
temp = head->next;
head = temp;
}
}

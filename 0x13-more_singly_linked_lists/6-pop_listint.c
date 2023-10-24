#include "lists.h"

/**
 * pop_listint - This  deletes the head node of a linked list
 * @head: The pointer to first element in the linked list
 *
 * Return: data inside those deleted elements,
 * or return 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}

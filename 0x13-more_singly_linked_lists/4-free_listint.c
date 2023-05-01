#include "lists.h"

/**
 * free_listint - free up a linked list
 * @head: the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *tempnode;
while (head)
{
tempnode = head->next;
free(head);
head = tempnode;
}
}

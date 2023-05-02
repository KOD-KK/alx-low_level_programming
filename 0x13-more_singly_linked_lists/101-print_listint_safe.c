#include "lists.h"
#include <stdio.h>
/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t
 *
 * Return:0- If the list is not looped
 * else - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head)
{
const listint_t *page, *book;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
page = head->next;
book = (head->next)->next;
while (book)
{
if (page == book)
{
page = head;
while (page != book)
{
nodes++;
page = page->next;
book = book->next;
}
page = page->next;
while (page != book)
{
nodes++;
page = page->next;
}
return (nodes);
}
page = page->next;
book = (book->next)->next;
}
return (0);
}
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the first node of the listint_t list.
 *
 * Return: The number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;
nodes = looped_listint_len(head);
if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}

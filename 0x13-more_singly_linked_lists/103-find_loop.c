#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts,or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *book = head;
listint_t *page = head;
if (!head)
return (NULL);
while (book && page && page->next)
{
page = page->next->next;
book = book->next;
if (page == book)
{
book = head;
while (book != page)
{
book = book->next;
page = page->next;
}
return (page);
}
}
return (NULL);
}

#include "lists.h"
/**
 * free_listint_safe - frees up a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff;
listint_t *tempnode;
if (!h || !*h)
return (0);
while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
tempnode = (*h)->next;
free(*h);
*h = tempnode;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}
*h = NULL;
return (len);
}

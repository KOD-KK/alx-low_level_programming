#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @n: data to insert in the new element
 * @head: pointer to the first element in the list
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode;
listint_t *tempnode = *head;
newnode = malloc(sizeof(listint_t));
if (!newnode)
return (NULL);
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
return (newnode);
}
while (tempnode->nextnode)
tempnode = tempnode->next;
tempnode->next = newnode;
return (newnode);
}

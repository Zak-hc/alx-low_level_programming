#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * dlistint_len - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count_nodes = 0;
if (h == 0)
{
return (0);
}
while (h != 0)
{
count_nodes++;
h = h->next;
}
return (count_nodes);
}

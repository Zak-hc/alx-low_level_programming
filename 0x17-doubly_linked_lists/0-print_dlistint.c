#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a doubly linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%i\n", h->n);
count++;
h = h->next;
}
return (count);
}

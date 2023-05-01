#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list
 * @head: pointer to pointer to head of list
 * @n: integer value to be stored in new node
 * Return: address of new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *fr;
listint_t *t = *head;
fr = malloc(sizeof(listint_t));
if (fr == NULL || head == NULL)
{
return (NULL);
}
if (*head == NULL)
{
*head = fr;
fr->n = n;
fr->next = NULL;
return (fr);
}
while (t->next != NULL)
{
t = t->next;
}
fr->n = n;
t->next = fr;
fr->next = NULL;
return (fr);
}

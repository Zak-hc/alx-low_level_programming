#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - adds a neing of a listint_t list
 * @head: pointer to pointist
 * @n: integer value to de
 * Return: address ofils
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nr;
nr = malloc(sizeof(listint_t));
if (nr == NULL)
{
return (NULL);
}
if (*head == NULL)
{
*head = nr;
nr->n = n;
nr->next = NULL;
return (nr);
}
else
{
nr->n = n;
nr->next = *head;
*head = nr;
return (nr);
}
}

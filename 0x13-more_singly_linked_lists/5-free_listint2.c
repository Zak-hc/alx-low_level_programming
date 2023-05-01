#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a ltint_t list
 * @head: pointer to  of the list
 */
void free_listint2(listint_t **head)
{
listint_t *ti, *to;
if (head == NULL)
return;
ti = *head;
while (ti != NULL)
{
to = ti->next;
free(ti);
ti = to;
}
*head = NULL;
}

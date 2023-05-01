#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
listint_t *ti, *to;
ti = head;
while (ti != NULL)
{
to = ti->next;
free(ti);
ti = to;
}}

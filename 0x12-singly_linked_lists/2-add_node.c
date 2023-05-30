#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to be duplicated and added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *nr;
nr = malloc(sizeof(list_t));
if (nr != NULL)
{
nr->str = strdup(str);
nr->len = strlen(str);
nr->next = *head;
*head = nr;
}
return (*head);
}


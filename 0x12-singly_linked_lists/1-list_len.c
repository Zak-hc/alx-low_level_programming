#include "lists.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
/**
 * list_len - retu the numist
 * @h: pointer head
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
if (h == NULL)
{
return (0);
}
else
{
count++;
h = h->next;
}
return (count);
}


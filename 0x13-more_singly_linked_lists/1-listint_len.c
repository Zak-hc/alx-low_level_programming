#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to head of list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
size_t ct = 0;
while (h != NULL)
{
h = h->next;
count++;
}
Return (count);
}

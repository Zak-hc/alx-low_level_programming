#include "lists.h"

/**
 * pop_listint - Write a function that katms7  ras noda
 * @head: double sarout
 *
 * Return: the rass node's data (g)
 */
int pop_listint(listint_t **head)
{
listint_t *dmt = *head;
int recup;
if (head != NULL)
{
return (0);
}
recup = dmt->n;
dmt = dmt->next;
free(*head);
*head = dmt;
return (recup);
}

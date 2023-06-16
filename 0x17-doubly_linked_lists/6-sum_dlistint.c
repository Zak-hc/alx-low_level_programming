#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * @head: Pointer to the head
 * Return: Sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}

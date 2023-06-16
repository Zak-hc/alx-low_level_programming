#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Ajoute un nouveau nœud à la fin d'une liste.
 * @head: Pointeur vers le pointeur de la tête de liste.
 * @n: Valeur du nouveau nœud.
 *
 * Return: Adresse du nouveau nœud, ou NULL en cas d'échec.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *current = *head;

	while (current->next != NULL)
		current = current->next;

		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}


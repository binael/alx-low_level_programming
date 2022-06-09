#include "lists.h"

/**
 * add_dnodeint - add a node
 * @head: list head
 * @n: const integer
 *
 * Return: address of the new assignment
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *d_list;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		printf("Malloc failed");
		return NULL;
	}

	new->n = n;
	d_list = *head;
	new->prev = NULL;
	new->next = d_list;

	if (d_list)
	{
		d_list->prev = new;
	}

	d_list = new;

	return (d_list);
}

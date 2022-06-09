#include "lists.h"

/**
 * get_dnodeint_at_index - get node index for an element
 * @head: doubly linked list head
 * @index: integer index number
 *
 * Return: node having the given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index || head != NULL)
	{
		head = head->next;
		index--;
	}

	if (index)
		return (NULL);

	return (head);
}

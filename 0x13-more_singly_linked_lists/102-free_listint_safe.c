#include "lists.h"

/**
 * free_listint_safe - frees a singly linked list that may contain
 * a loop
 * @h: the head of the singly linked list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *node;

	if (h == NULL || *h == NULL)
	{
		return (size);
	}

	while (*h != NULL)
	{
		node = (*h);
		(*h) = (*h)->next;
		free(node);
		size++;
	}
	*h = NULL;

	return (size);
}

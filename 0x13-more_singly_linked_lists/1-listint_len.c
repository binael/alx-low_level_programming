#include "lists.h"

/**
 * listint_len - gets the total elements in a linked list
 * @h: list head
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}

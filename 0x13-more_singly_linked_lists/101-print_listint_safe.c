#include "lists.h"

/**
 * print_listint_safe - prints a linked list that may have loops
 * @head: the head of the linked list
 *
 * Return: size_t size of the linked list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0, end = 0;
	const listint_t *fast, *slow;

	if (head == NULL)
		return (size);

	fast = slow = head;
	while (fast != NULL && fast->next != NULL && end == 0)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		size++;

		if (fast == slow)
		{
			end = 1;
			if (slow == head)
				break;

			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)fast, fast->n);
				fast = fast->next;
				slow = slow->next;
				size++;
			}
		}
	}
	if (fast == slow)
		printf("-> [%-p] %d\n", (void *)fast, fast->n);

	while ((fast != slow) && (slow != NULL))
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		size++;
		slow = slow->next;
	}
	return (size);
}

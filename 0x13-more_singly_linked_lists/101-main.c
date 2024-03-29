#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *head2;
    listint_t *node;
	size_t s1, s2;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    s1 = print_listint_safe(head2);
    head = NULL;
    node = add_nodeint(&head, 0);
    node->next = head;
    s2 = print_listint_safe(head);

	printf("\n\n s1: %ld\n s2: %ld\n", s1, s2);
    return (0);
}

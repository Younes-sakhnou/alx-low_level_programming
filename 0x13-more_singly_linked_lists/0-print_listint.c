#include "lists.h"

/**
 * print_listint - function that prints all the elements of a linked list.
 * @h: the head of the linked list.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}

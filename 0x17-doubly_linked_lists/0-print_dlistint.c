#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint_t list.
 *
 * @h: head of the list.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes_number;

	nodes_number = 0;

	if (h == NULL)
		return (nodes_number);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes_number++;
		h = h->next;
	}

	return (nodes_number);
}

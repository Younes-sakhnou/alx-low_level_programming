#include "lists.h"

/**
 * listint_len - function that prints the number of elements in a linked list.
 * @h: the head of the linked list.
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}

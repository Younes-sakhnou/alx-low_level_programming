#include "lists.h"

/**
 * list_len - function that trurns the number of elements of a list.
 * @h: the list.
 *
 * Return: count.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

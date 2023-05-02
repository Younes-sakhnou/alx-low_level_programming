#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: head of the linked list.
 * @index: index of the node.
 *
 * Return: node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i, j;

	if (head == NULL)
		return (NULL);

	ptr = head;
	for (j = 0; ptr != NULL; j++)
	{
		ptr = ptr->next;
	}

	if (index > j)
		return (NULL);

	ptr = head;
	for (i = 0; ptr != NULL && i < index; i++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}

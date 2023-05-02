#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node in a position.
 * @head: head of the linked list.
 * @idx: index of the node.
 * @n: new node value
 *
 * Return: new node adress
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int count, i;

	ptr = *head;
	for (count = 0; ptr != NULL; count++)
	{
		ptr = ptr->next;
	}

	if (head == NULL || idx > count)
		return (NULL);
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx != 0)
	{
		ptr = *head;
		for (i = 0; i < idx - 1; i++)
		{
			ptr = ptr->next;
		}
		new->next = ptr->next;
		ptr->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}

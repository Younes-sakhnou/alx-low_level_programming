#include "lists.h"

/**
 * pop_listint - function that delets the head node of a linked list.
 * @head: head of the linked list.
 *
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	i = ptr->n;
	free(ptr);
	return (i);
}

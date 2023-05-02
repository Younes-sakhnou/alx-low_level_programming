#include "lists.h"

/**
 * free_listint - function that frees a linked list.
 * @head: the head of the list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

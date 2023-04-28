#include "lists.h"

/**
 * free_list - frees a list_t list.
 *
 * @head: A pointer to the first node of the list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}

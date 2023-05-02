#include "lists.h"

/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: head.
  * @n: value to insert into the node.
  *
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

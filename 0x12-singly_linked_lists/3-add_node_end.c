#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the list_t list.
 * @str: value to insert into the node.
 *
 * Return: nodes count.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}

/**
 * _strlen - function that returns the length of a string.
 * @str : character string.
 *
 * Return: lenght of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

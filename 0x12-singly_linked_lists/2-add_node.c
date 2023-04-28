#include "lists.h"


int _strlen(const char *s);

/**
 * add_node - adds a new node at beginning of a list_t list.
 * @head: head of the list_t list.
 * @str: value to insert into the node.
 *
 * Return: nodes count.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}

/**
 * _strlen - function that returns the length of a string.
 * @s : character string.
 *
 * Return: lenght of the string.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

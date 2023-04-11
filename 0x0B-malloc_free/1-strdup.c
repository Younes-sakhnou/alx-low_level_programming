#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: st
 */
char *_strdup(char *str)
{
	char *st;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	st = (char *)malloc(sizeof(char) * (i + 1));

	if (st == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		st[j] = str[j];

	return (st);
}

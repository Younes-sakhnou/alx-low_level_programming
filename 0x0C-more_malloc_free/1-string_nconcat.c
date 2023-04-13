#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: bytes.
 *
 * Return: pointer to the memory allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int ts1, ts2, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ts1 = 0; s1[ts1] != '\0'; ts1++)
		;

	for (ts2 = 0; s2[ts2] != '\0'; ts2++)
		;

	if (n > ts2)
		n = ts2;

	lsout = ts1 + n;

	st = malloc(lsout + 1);

	if (st == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ts1)
			st[i] = s1[i];
		else
			st[i] = s2[i - ts1];

	st[i] = '\0';

	return (st);
}

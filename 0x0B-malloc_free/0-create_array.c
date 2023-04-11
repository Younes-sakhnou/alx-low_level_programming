#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, and initializes it with a char
 * @size: The desired size of the array
 * @c:The character to initialize each element of the array with
 *
 * Return: 0 (Success) NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

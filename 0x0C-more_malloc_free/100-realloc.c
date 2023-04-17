#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block.
 * @ptr: pointer to the old size.
 * @old_size: the old memory size.
 * @new_size: the new memory size.
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	free(ptr);
	return (p);
}

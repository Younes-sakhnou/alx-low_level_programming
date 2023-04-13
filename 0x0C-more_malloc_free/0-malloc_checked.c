#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory.
 * @b: size.
 *
 * Return: pointer to the allocated memory and 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

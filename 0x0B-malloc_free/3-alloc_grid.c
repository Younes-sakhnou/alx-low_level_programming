#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: parameter
 * @height: parameter
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **st;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	st = malloc(height * sizeof(int *));
	if (st == NULL)
	{
		free(st);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		st[i] = malloc(width * sizeof(int));
		if (st[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(st[i]);
			free(st);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			st[i][j] = 0;

	return (st);
}

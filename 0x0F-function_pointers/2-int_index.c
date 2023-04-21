#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: an array of integers
 * @size: number of elements in the array
 * @cmp: a pointer to a function to be used to compare values
 * Return: the index of the first element for which
 * the cmp function does not return 0, and returns -1 if no element matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
				return (i);
		}
	}
	return (-1);
}

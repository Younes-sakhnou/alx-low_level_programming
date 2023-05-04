#include "main.h"

/**
 * set_bit - sets a bit at the given index to 1.
 * @n: pointer to the bit to change.
 * @index: index of the bit to set to 1
 *
 * Return: 1 (Success), -1 (failure).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

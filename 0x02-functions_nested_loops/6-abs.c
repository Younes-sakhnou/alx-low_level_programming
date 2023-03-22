#include "main.h"

/**
 * _abs - a function that computes the absolute value
 * @c: integer
 * Return: c
 */
int _abs(int c)
{
	if (c > 0)
		return (c);
	else if (c < 0)
		return (c * -1);
	else
		return (c);
}

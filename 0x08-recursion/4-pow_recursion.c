#include "main.h"

/**
 * _pow_recursion - the value of x raised to the power of y
 * @x: parameter
 * @y: parameter
 * Return: if y < 0 return -1
 *         else return x raise to the power of y
 */
int _pow_recursion(int x, int y)
{
	int outcome = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	outcome *= _pow_recursion(x, y - 1);

	return (outcome);
}

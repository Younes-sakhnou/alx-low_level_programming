#include "main.h"

/**
 * _sqrt - function that returns the natural square root
 * @n: parameter
 * @m: parameter
 * Return: square root or -1.
 */
int _sqrt(int n, int m)
{
	if (m % (n / m) == 0)
	{
		if (m * (n / m) == n)
			return (m);
		else
			return (-1);
	}
	return (0 + _sqrt(n, m + 1));
}
/**
 * _sqrt_recursion - returns the natural square root
 * @n: parameter
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 2));
}

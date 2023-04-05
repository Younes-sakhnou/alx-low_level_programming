#include "main.h"

/**
 * factorial - function that returns tha factorial of a given number.
 * @n: parameter
 * Return: if n < 0 return -1
 *         if n > 0 return the factorial of n
 */
int factorial(int n)
{
	int outcome = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	outcome *= factorial(n - 1);

	return (outcome);
}

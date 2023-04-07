#include "main.h"

/**
 * _prime - detects if it's an input number
 * @n: parameter
 * @m: parameter
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int _prime(unsigned int n, unsigned int m)
{
	if (n % m == 0)
	{
		if (n == m)
			return (1);
		else
			return (0);
	}
	return (0 + _prime(n, m + 1));
}
/**
 * is_prime_number - function that returns 1 if the input is prime otherwise 0
 * @n: parameter
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_prime(n, 2));
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: int that count parameters.
 *
 * Return: s.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int s = 0;

	va_start(args, n);

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, const unsigned int);

		s += x;

	}
	va_end(args);
	return (s);
}

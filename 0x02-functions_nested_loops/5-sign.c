#include "main.h"

/**
 * print_sign - pritns the sign of a number
 *
 * @n: we will check this number sign
 *
 * Return: 1 if n > 0 and 0 if n == 0 and -1 if n < 0
 */
int print_sign(int n)
{

	if (n > 0)
	{

		_putchar('+');
	return (1);
	}

	else if (n < 0)
	{

		_putchar('-');
	return (-1);
	}

	else
	{

		_putchar('0');
	return (0);
	}
}

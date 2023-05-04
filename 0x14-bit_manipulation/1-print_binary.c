#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to be converted.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int number;

	for (i = 63; i >= 0; i--)
	{
		number = n >> i;

		if (number & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

#include "main.h"

/**
 * puts2 - function that prints every other character
 * @str: parameter
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && str[i + 1] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

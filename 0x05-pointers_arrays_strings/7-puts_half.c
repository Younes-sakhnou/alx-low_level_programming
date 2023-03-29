#include "main.h"
#include <string.h>

/**
 * puts_half -  prints second half of a string, followed by a new line.
 * @str: parameter.
 * Return: void.
 */
void puts_half(char *str)
{
	int i, middle;

	middle = strlen(str) / 2;
	if (strlen(str) % 2 != 0)
		middle++;
	for (i = middle; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

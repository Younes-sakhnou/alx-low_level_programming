#include "main.h"

/**
 * _puts - pritns string followed by a new line
 * @str: string pointer
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

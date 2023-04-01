#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char hex[] = "0123456789abcdef";
	int hex_size = sizeof(hex) / sizeof(hex[0]);

	for (i = 0; i < (hex_size - 1); i++)
		putchar(hex[i]);
	putchar('\n');
	return (0);
}

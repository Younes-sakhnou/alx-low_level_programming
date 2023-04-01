#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		if (i == 113 || i == 101)
			continue;
		else
			putchar(i);
	putchar('\n');
	return (0);
}

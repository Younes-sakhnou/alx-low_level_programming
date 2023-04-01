#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, h;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if ((i - j) >= 0)
				continue;
			for (h = 48; h <= 57; h++)
			{
				if ((j - h) >= 0 || (i - h) >= 0)
					continue;
				putchar(i);
				putchar(j);
				putchar(h);
				if (i == 55 && j == 56 && h == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int all_digits(char *s);

/**
 * main - adds positive numbers.
 * @argc:The number of command-line arguments
 * @argv:An array of pointers to the arguments as strings
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
	unsigned int i, sum;

	i = 1;
	sum = 0;
	if (argc == 1)
		printf("%d\n", sum);
	else
	{
		while (argv[i] != NULL)
		{
			if (all_digits(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
				i++;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * all_digits - a function that checks if a string characters are all digits.
 * @s: the given string.
 * Return: 1 if true 0 if not.
 */
int all_digits(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (!(*(s + i) >= '0' && *(s + i) <= '9'))
		{
			return (1);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

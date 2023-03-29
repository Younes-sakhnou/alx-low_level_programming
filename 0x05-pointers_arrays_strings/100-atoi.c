#include "main.h"

/**
 * _atoi -  a function that convert a string to an integer.
 * @s: the given string.
 * Return: an integer value.
 */
int _atoi(char *s)
{
	int i, sign, n, factor;
	unsigned int num;

	sign = 1;
	num = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
			sign *= -1;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			factor = 1;
			n = i + 1;
			while (*(s + n) >= '0' && *(s + n) <= '9')
			{
				factor *= 10;
				n++;
			}
			num += (*(s + i) - '0') * factor;
			if (!(*(s + i + 1) >= '0' && *(s + i + 1) <= '9'))
				break;
		}
		else
			continue;
	}
	return (num * sign);
}

#include <stdio.h>
#include "main.h"

/**
 * _isdigit - return 1 if it's a digit and 0 otherwise
 * @c: parametre
 * Return: return 1 or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

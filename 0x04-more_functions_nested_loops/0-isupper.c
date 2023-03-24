#include "main.h"
#include <stdio.h>

/**
 * _isupper - return 1 if uppercase and 0 otherwise
 * @c: parameter
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (0);

	else if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}

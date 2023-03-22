#include "main.h"

/**
 * _isalpha - checks for lowercase or uppercase character
 * @c: is the character to be checked
 * Return: 1 if c is lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

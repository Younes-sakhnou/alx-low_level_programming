#include "main.h"

/**
 *_strlen - function that returns the lentgh of a sting
 *@s: parameter
 * Return: void
 **/
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}

#include <string.h>
#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: first pointer.
 * @src: second pointer.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= (int) strlen(src); i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

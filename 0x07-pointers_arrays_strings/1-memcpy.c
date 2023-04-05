#include "main.h"

/**
 * _memcpy - funtcion that copies memory area
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

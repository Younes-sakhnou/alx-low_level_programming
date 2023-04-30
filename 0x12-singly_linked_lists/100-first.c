#include "lists.h"
#include <stdio.h>

/**
 * lievre - function that prints before the main function is executed.
 *
 * Return: void.
 */
void __attribute__((constructor)) lievre()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

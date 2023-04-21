#ifndef _HEADER_
#define _HEADER_
#include <stddef.h> 
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));













#endif

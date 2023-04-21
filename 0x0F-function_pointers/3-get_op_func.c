#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - a function that selects the orrect function
 * to performoperation asked by the user
 * @s: the given operator
 * Return: an integer
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 6)
	{
		if (ops[i].op == NULL || s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

#include "3-calc.h"

/**
 * main - a program that performs simple operations
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	ptr = get_op_func(operator);
	if (ptr == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ptr(num1, num2));

	return (0);
}

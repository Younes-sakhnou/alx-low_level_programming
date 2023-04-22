#include "3-calc.h"

/**
 * main - a program that prints the opcodes of its main function.
 * @argc: number given of argument.
 * @argv: given arguments.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int i, number_of_bytes;
	unsigned char *opcode = (unsigned char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%02x", opcode[i]);
		if (i != number_of_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}

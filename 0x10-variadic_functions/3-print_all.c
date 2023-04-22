#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: format.
 * Return: nothing.
 **/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *string;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i + 1] != '\0') && (format[i] == 'c'
			|| format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

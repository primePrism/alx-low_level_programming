#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int in;
	va_list args;

	va_start(list, n);

	for (in = 0; in < n; in++)
	{
		if (!separator)
			printf("%d\n", va_arg(args, int));
		else if (separator && i == 0)
			printf("%d\n", va_arg(args, int));
		else
			printf("%s%d\n", separator, va_arg(args, int));
	}

	va_end(args);
}

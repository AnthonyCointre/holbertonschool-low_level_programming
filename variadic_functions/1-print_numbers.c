#include "variadic_functions.h"

/**
 * print_numbers - a
 * @separator: a
 * @n: a
 * @...: a
 *
 * Return: a
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	va_list _args;

	va_start(_args, n);

	for (b = 0; b < n; b++)
	{
		int _num = va_arg(_args, int);

		printf("%i", _num);

		if (b < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(_args);

	printf("\n");
}

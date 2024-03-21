#include "variadic_functions.h"

/**
 * print_strings - a
 * @separator: a
 * @n: a
 * @...: a
 *
 * Return: a
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list _args;
	char *str;
	unsigned int b;

	va_start(_args, n);

	for (b = 0; b < n; b++)
	{
		str = va_arg(_args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}

		else
		{
			printf("(nil)");
		}

		if (separator != NULL && b < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(_args);
	printf("\n");
}

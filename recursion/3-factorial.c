#include "main.h"

/**
 * factorial - a
 * @n: a
 *
 * Return: a
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

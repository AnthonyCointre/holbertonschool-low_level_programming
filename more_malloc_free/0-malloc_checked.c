#include "main.h"

/**
 * *malloc_checked - a
 * @b: a
 * Return: a
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}

	return (i);
}

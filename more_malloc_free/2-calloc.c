#include "main.h"

/**
 * _calloc - a
 * @nmemb: a
 * @size: a
 *
 * Return: a
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int size, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	size = nmemb * size;
	s = malloc(size);

	if (s == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = 0;
		i++;
	}

	return (s);
}

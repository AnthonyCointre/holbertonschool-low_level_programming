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

	if (!nmemb || !size)
	{
		return (NULL);
	}

	s = malloc(nmemb * size);

	if (!s)
	{
		return (NULL);
	}

	nmemb *= size;

	while (nmemb--)
	{
		s[nmemb] = 0;
	}

	return (s);
}

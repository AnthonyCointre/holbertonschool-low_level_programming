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
	char *array;
	unsigned int array_size, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array_size = nmemb * size;
	array = malloc(array_size);

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < array_size)
	{
		array[i] = 0;
		i++;
	}

	return (array);
}

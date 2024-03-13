#include "main.h"
/**
 * array_range - a
 * @min: a
 * @max: a
 *
 * Return: a
 */

int *array_range(int min, int max)
{
	int *s;
	int i, size, n;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min;
	s = malloc((size + 1) * sizeof(int));
	i = 0;
	n = min;

	while (n <= max)
	{
		s[i] = n;
		i++;
		n++;
	}

	return (s);
}

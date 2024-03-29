#include "main.h"

/**
 * _strcmp - a
 * @s1: a
 * @s2: a
 *
 * Return: a
 */
int _strcmp(char *s1, char *s2)
{
	int len;

	len = 0;

	while (s1[len] != '\0' && s2[len] != '\0')
	{
		if (s1[len] != s2[len])
		{
			return (s1[len] - s2[len]);
		}

		len++;
	}

	return (s1[len] - s2[len]);
}

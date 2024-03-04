#include "main.h"
#include <stdio.h>

/**
 * _memset - a
 * @s: a
 * @b: a
 * @n: a
 *
 * Return: a
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len = 0;

	while (len < n)
	{
		s[len] = b;
		len++;
	}

	return (s);
}

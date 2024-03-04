#include "main.h"
#include <stdio.h>

/**
 * _memset - a
 * @s: pointeur de zone mémoire
 * @b: octet constant
 * @n: nombre d'octets
 *
 * Return: a
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

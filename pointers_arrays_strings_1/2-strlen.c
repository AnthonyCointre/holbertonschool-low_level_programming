#include "main.h"
#include <stdio.h>

/**
 * _strlen - a
 * @s: a
 *
 * Return: a
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

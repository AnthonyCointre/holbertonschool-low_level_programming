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
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}

	return (a);
}

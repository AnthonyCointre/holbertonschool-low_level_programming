#include "main.h"

/**
 * print_rev - a
 * @s: a
 *
 * Return: a
*/
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (len--; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet - a
 *
 * Return: a
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

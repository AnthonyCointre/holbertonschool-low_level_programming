#include "main.h"

/**
 * print_alphabet_x10 - a
 * Return:
 */

void print_alphabet_x10(void)
{
	int i;
	for (i = 0; i < 40; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
	}

	_putchar('\n');
}

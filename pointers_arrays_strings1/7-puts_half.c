#include "main.h"

/**
 * puts_half - a
 * @str: a
 *
 * Return: a
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
	{
		i = a / 2;
	}

	else
	{
		i = (len - 1) / 2;
	}

	for (i++; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

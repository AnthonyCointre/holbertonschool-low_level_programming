#include "main.h"

/**
 * puts_half - a
 * @str: a
 *
 * Return: a
 */
void puts_half(char *str)
{
	int a = 0, i;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 1)
	{
		i = a / 2;
	}

	else
	{
		i = (a - 1) / 2;
	}

	for (i++; i < a; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

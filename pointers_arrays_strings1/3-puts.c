#include "main.h"

/**
 * _puts - a
 * @str: a
 *
 * Return: a
*/
void _puts(char *str)
{
	int len = 0;

	while (len >= 0)
	{
		if (str[len] == '\0')
		{
			_putchar('\n');
			break;
		}

		_putchar(str[len]);
		len++;
	}
}

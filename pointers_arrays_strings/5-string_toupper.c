#include "main.h"

/**
 * string_toupper - a
 * @s: a
 *
 * Return: a
 */
char *string_toupper(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= 'a' && s[len] <= 'z')
		{
			s[len] -= 32;
		}

		len++;
	}

	s[len] = '\0';

	return (s);
}

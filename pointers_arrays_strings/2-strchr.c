#include "main.h"

/**
 * _strchr - a
 * @s: a
 * @c: a
 *
 * Return: a
 */
char *_strchr(char *s, char c)
{
	int len;

	while (s[len] >= '\0')
	{
		if (s[len] == c)
		{
			return (s + len);
		}

		len++;
	}

	return ('\0');
}

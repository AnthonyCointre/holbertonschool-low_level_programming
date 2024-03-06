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

	for (len = 0; s[len] >= '\0'; len++)
	{
		if (s[len] == c)
		{
			return (s + len);
		}
	}

	return ('\0');
}

#include "main.h"

/**
 * _strlen_recursion - a
 * @s: a
 *
 * Return: a
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

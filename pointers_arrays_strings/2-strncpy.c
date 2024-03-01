#include "main.h"

/**
 * _strncpy - a
 * @dest: a
 * @src: a
 * @n: a
 *
 * Return: a
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	for (len = 0; len < n && src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}

	for ( ; len < n ; len++)
	{
		dest[len] = '\0';
	}

	return (dest);
}

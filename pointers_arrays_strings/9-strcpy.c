#include "main.h"

/**
 * _strcpy - a
 * @dest: a
 * @src: a
 *
 * Return: a
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}

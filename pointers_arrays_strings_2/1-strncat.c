#include "main.h"

/**
 * _strncat - a
 * @dest: a
 * @src: a
 * @n: a
 *
 * Return: a
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (len2 < n && src[len2] != '\0')
	{
		dest[len1 + len2] = src[len2];
		len2++;
	}

	dest[len1 + len2] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _memcpy - a
 * @dest: a
 * @src: a
 * @n: a
 *
 * Return: a
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int len = 0;

	while (len < n)
	{
		*(dest + len) = *(src + len);
		len++;

	}

	return (dest);
}

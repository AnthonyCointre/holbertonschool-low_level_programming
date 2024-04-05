#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *p = (unsigned char *)&num;

	if (*p == 1)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

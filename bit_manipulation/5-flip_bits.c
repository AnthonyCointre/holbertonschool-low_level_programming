#include "main.h"

/**
* flip_bits - Returns the number of bits you would
*             need to flip to get from one number to another.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int len = 0;

	while (result)
	{
		len += result & 1;
		result >>= 1;
	}

	return (len);
}

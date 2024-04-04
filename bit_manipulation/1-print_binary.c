#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The unsigned long integer to print in binary.
*/

void print_binary(unsigned long int n)
{
	int started = 0;
	unsigned long int i = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (i > 0)
	{
		if (n & i)
		{
			_putchar('1');
			started = 1;
		}

		else if (started)
		{
			_putchar('0');
		}

		i >>= 1;
	}
}

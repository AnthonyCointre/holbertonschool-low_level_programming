#include "main.h"

/**
 * swap_int - a
 * @a: a
 * @b: a
 *
 * Return: a
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

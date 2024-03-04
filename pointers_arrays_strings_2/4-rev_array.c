#include "main.h"

/**
 * reverse_array - a
 * @a: a
 * @n: a
 */
void reverse_array(int *a, int n)
{
	int temp;
	int len;

	n--;

	for (len = 0;  len < n ; len++)
	{
		temp = a[len];
		a[len] = a[n];
		a[n] = temp;
		n--;
	}
}

#include"main.h"
/**
* infinite_add - adds two integers stored as strings
*
* @n1: first integer string to add
* @n2: second integer string to add
* @r: array to store resulting string in
* @size_r: size of array r
*
* Return: the summed string in r. If r is too small for the result,
* return (0);
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, index = size_r - 1;

	r[index--] = '\0';

	while (*n1 || *n2 || carry)
	{
		int sum = carry;

		if (*n1)
			sum += *n1 - '0';
		if (*n2)
			sum += *n2 - '0';

		carry = sum / 10;
		sum %= 10;

		if (index < 0)
			return (0);

		r[index--] = sum + '0';

		if (*n1)
			n1++;
		if (*n2)
			n2++;
	}

	if (carry)
	{
		if (index < 0)
			return (0);

		r[index--] = '1';
	}

	if (index >= 0)
		memmove(r, r + index + 1, size_r - index - 1);

	return (r);
}

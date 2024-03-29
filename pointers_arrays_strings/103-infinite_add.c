#include "main.h"

/**
* calculate_remaining - calculates remaining digits
* @n1: first integer string to add
* @n2: second integer string to add
* @r: array to store resulting string in
* @size_r: size of array r
* @index: current index in r
* @carry: carry value
* @s1: pointer to current digit in n1
* @s2: pointer to current digit in n2
*
* Return: the summed string in r. If r is too small for the result,
* return (0);
*/
char *calculate_remaining(char *n1, char *n2, char *r, int size_r, int index,
int carry, char *s1, char *s2)
{
	while (s1 != n1 - 1)
	{
		r[index] = *s1 + carry;
		carry = 0;
		if (r[index] > '9')
		{
			carry = 1;
			r[index] -= 10;
		}
		s1--;
		index++;
		if (size_r == index && (s1 != n1 - 1 || carry == 1))
			return (0);
	}
	while (s2 != n2 - 1)
	{
		r[index] = *s2 + carry;
		carry = 0;
		if (r[index] > '9')
		{
			carry = 1;
			r[index] -= 10;
		}
		s2--;
		index++;
		if (size_r == index && (s2 != n2 - 1 || carry == 1))
			return (0);
	}
	return (handle_final_carry(r, index, carry));
}

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
	int carry = 0, index = 0, index2;

	char *s1 = n1, *s2 = n2;

	while (*s1 != 0)
		s1++;
	while (*s2 != 0)
		s2++;
	size_r--;
	r[size_r] = 0;
	s1--;
	s2--;
	while (s2 != n2 - 1 && s1 != n1 - 1)
	{
		r[index] = *s2 - '0' + *s1 + carry;
		carry = 0;
		if (r[index] > '9')
		{
			carry++;
			r[index] -= 10;
		}
		index++;
		s2--;
		s1--;
		if (size_r == index && (s1 != n1 - 1 || s2 != n2 - 1 || carry == 1))
			return (0);
	}
	return (calculate_remaining(n1, n2, r, size_r, index, carry, s1, s2));
}

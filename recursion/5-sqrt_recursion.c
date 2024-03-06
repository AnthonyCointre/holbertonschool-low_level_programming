#include "main.h"

/**
  * _sqrt - a
  * @n: a
  * @i: a
  *
  * Return: a
  */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}

/**
  * _sqrt_recursion - a
  * @n: a
  *
  * Return: a
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

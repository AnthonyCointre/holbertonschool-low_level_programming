#include "main.h"

/**
  * check_prime - a
  * @n: a
  * @i: a
  *
  * Return: a
  */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}

/**
  * is_prime_number - a
  * @n: a
  *
  * Return: a
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

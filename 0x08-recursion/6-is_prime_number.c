#include "main.h"

/**
  * is_prime - returns a number is prime recurscively
  * @i: input value
  * @j: input value
  * Return: prime number
  */

int is_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (is_prime(n, j - 1));
}

/**
  * is_prime_number - returns a prime number
  * @n: input value
  * Return: prime number
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n - 1));
}

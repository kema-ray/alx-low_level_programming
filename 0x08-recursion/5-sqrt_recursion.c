#include "main.h"

/**
  * square_recursion - finds the natural square root of a number recurcively
  * @n: number to calculate the square root of a number
  * @j: iterator
  * Return: the resulting square root
  */

int square_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (1);
	return (square_recursion(n, j + 1));
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: input value
  * Return: the square root
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_recursion(n, 0));
}

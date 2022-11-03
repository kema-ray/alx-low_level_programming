#include "main.h"

/**
  * factorial - returns the factorial of a given number
  * @n: input value
  * Return: factorial of a number
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

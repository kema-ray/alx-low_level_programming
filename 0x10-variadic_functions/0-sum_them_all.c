#include "variadic_functions.h"


/**
  * sum_them_all - function that returns the sum of all its parameters
  * @n: integer argument
  * Return: The sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}

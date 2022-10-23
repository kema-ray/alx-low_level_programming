#include "main.h"

/**
  * print_number - function that prints an integer
  * @n: integer to be printed
  */

void print_number(int n)
{
	unsigned int h1;

	if (n < 0)
	{
		h1 = -n;
		_putchar('-');
	}
	else
	{
		h1 = n;
	}
	if (h1 / 10)
	{
		print_number(h1 / 10);
	}
	_putchar((h1 % 10) + '0');
}

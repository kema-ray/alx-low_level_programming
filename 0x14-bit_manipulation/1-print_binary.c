#include "main.h"

/**
  * print_binary - prints the binary representation of a number
  * @n: number to print in binary
  */

void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int i;

	for (a = 63; a >= 0; a--)
	{
		i = n >> a;

		if (i & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}

	if (!count)
		_putchar('0');
}

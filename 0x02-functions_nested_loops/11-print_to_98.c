#include "main.h"
/**
  * print_to_98 - print number from 1 to 98
  * @n: The number in question
  */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_putchar("%d, ", n--);
		_putchar("%d\n", n)
	}
	else
	{
		while (n < 98)
			_putchar("%d, ", n++);
		_putchar("%d\n", n);
	}
}

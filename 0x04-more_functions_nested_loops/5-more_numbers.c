#include "main.h"
/**
  * more_numbers - prints 10 times the numbers, from 0 to 14
  */

void more_numbers(void)
{
	int count = 0;
	char c;

	while (count++ <= 9)
	{
		for (c = '0'; c <= '14'; c++)
			_putchar(c);
		_putchar('\n');
	}
}

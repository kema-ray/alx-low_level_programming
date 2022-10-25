#include "main.h"
#include <stdio.h>

/**
  * puts2 -  prints every other character of a string, starting with the first
  * characters
  * @str: input
  */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != 0; n++)
	{
		if (n % 2 == 0)
		{
			putchar(str[n]);
		}
	}
	putchar('\n');
}

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * puts_half - prints half of a string
  * @str: input
  */

void puts_half(char *str)
{
	int i, length, half;

	length = strlen(str);

	if (length % 2 == 0)
	{
		half = length / 2;
		for (i = half; str[i] != 0; i++)
		{
			putchar(str[i]);
		}
	}
		else
		{
			half = (length + 1) / 2;
			for (i = half; str[i] != 0; i++)
			{
				putchar(str[i]);
			}
		}
	putchar('\n');
}

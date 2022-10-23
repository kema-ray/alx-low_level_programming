#include <stdio.h>
#include "main.h"
/**
  * print_square - prints a square
  * @size: size of the square
  */

void print_square(int size)
{
	int len1, len2;

	if (size > 0)
	{
		for (len1 = 0; len1 < size; len1++)
		{
			for (len2 = 0; len2 < (size - 1); len2++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}

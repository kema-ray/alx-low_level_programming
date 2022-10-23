#include <stdio.h>
#include "main.h"
/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: number of times the \ should be printed
  */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (i == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}

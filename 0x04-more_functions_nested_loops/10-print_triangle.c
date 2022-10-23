#include "main.h"
#include <stdio.h>

/**
  * print_triangle - function that prints a triangle
  * @size: size of the triangle
  */

void print_triangle(int size)
{
	int len1, len2;

	if (size > 0)
	{
		for (len1 = 1; len1 <= size; len1++)
		{
			for ((len2 = size - len1); len2 > 0; len2--)
			{
				putchar(' ');
			}
			for (len2 = 0; len2 < len1; len2++)
			{
				putchar('#');
			}
			if (len1 == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}

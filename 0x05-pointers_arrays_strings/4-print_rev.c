#include "main.h"
#include <stdio.h>

/**
  * print_rev -  prints a string, in reverse
  * @s: input
  */
void print_rev(char *s)
{
	int count = 0;

	while (*s != 0)
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		putchar(*s);
		count--;
	}
	putchar('\n');
}

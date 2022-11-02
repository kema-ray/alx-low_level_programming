#include "main.h"
#include <stdio.h>

/**
  * print_diagsums -  prints the sum of the two diagonals
  * of a square matrix of integers
  * @a: input
  * @size: input
  */

void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;
	int l = size * size;

	for (i = 0; i < l; i += size + 1)
	{
		j += a[i];
	}
	for (i = size - 1; i < l - 1; i += size - 1)
	{
		k += a[i];
	}
	printf("%d, %d\n", j, k);
}

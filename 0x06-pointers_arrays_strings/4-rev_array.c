include "main.h"

/**
  * reverse_array -  function that reverses the content of an array
  * of integers
  * @a: input value
  * @n: number of elements of the array
  */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

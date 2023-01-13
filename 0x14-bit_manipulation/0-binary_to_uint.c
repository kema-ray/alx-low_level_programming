#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: points to a string of 0 and 1 characters
  * Return: converted number
  */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		num = 2 * num + (b[a] - '0');
	}
	return (num);
}

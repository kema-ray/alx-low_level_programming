#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: input value
  * @b: input value
  * @n: input value
  * Return: changed array with new value for n bytes
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

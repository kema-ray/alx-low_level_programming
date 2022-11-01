#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: memory where it is stored
  * @src: memory where it is copied from
  * @n: number of bytes
  * Return: copied memory with a byte change
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}

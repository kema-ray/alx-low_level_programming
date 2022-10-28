#include "main.h"

/**
  * _strncpy - copies a string
  * @dest: input value
  * @src: input value
  * @n: input value
  * Return: void
  */

char *_strncpy(char *dest, char *src, int n)
{
	char i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

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
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		des[i] = '\0';
		i++;
	}
	return (des);
}

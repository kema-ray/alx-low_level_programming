#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: input value
  * @src: input value
  * @n: input value
  * Return: void
  */

char *_strncat(char *dest, char *src, int n)
{
	int l1;
	int l2;

	l1 = 0;
	while (dest[l1] != '\0')
		l1++;
	l2 = 0;
	while (l2 < n && src[l2] != '\0')
	{
		dest[l1] = src[l2];
		l1++;
		l2++;
	}
	dest[l1] = '\0';
	return (dest);

}

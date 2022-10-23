#include "main.h"

/**
  * _isupper - function to check for uppercase character
  * @c: is the intthat will use for the argument of the function
  * Return: 1 or 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

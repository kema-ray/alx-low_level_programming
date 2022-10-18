#include "main.h"
 /**
  * _islower - function to check for lowercase character
  * code written by Rachel Oyondi
  * return: 1 if lowercase, else 0.
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

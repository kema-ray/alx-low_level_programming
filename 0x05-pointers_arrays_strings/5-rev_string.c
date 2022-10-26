#include "main.h"
#include <stdio.h>

/**
  * rev_string - reverses a string
  * @s: input
  */

void rev_string(char *s)
{
	int counter = 0;
	int reverse = s[0];
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		reverse = s[i];
		s[i] = s[counter];
		s[counter] = reverse;
	}
}

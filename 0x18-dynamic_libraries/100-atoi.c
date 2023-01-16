#include "main.h"

/**
  * _atoi -  convert a string to an integer
  * @s: input
  * Return: Always 0
  */

int _atoi(char *s)
{
	int a;
	int result = 0;
	int digit = 0;
	int length = -1;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			length = length * -1;
		if (s[a] >= '0' && s[a] <= '9')
		{
			result = result * 10;
			result = result - (s[a] - '0');
			digit = 1;
		}
		else if (digit == 1)
			break;
	}
	result = length * result;
	return (result);
}

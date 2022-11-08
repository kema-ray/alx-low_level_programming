#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: input value
  * @c: input value
  * Return: Always 0 (success)
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

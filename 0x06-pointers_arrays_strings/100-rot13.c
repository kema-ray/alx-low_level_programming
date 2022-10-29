#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @a: pointer to string params
 * Return: *a
 */

char *rot13(char *a)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == data1[j])
			{
				a[i] = datarot[j];
				break;
			}
		}
	}
	return (a);
}

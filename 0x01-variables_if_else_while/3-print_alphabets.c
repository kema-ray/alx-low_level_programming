#include <stdio.h>

/**
 *main - Entry Point
 *Return: 0
 */
int main(void)
{
	int a;
	int A;

	for (a = 0; a < 26; a++)
	putchar('a' + a);
	for (A = 0; A < 26; A++)
	putchar('A' + A);
	putchar ('\n');
	return (0);
}

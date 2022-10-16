#include <stdio.h>

/**
 *main - Entry Point
 *Return: 0
 */
int main(void)
{
	int c;
	char ch;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}


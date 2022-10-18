#include <stdio.h>
/**
 *main - Entry Point
 *Return: 0
 */
int main(void)
{
	int a;

	unsigned long n1 = 0, n2 = 1, n3;

	for (a = 0; a < 50; a++)
	{
		n3 = n1 + n2;

		printf("%lu", n3);
		n1 = n2;

		n2 = n3;

		if (a == 49)
			printf("\n");
		else
			printf(", ");

	}

	return (0);
}

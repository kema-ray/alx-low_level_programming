#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - Entry Point
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d Is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d Is zero\n", n);
	}
	else
	{
		printf("%d Is negative\n", n);
	}
	return (0);
}

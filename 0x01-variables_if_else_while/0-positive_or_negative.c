#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*  *main - Entry Point */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Enter a number: ");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("Is positive\n");
	}
	else if (n == 0)
	{
		printf("Is zero\n");
	}
	else
	{
		printf("Is negative\n");
	}
	return (0);
}

#include <stdio.h>
// elememt that reads an array of 10 integers and count total nmber of odd and even

void main()
{
    int a[10],i;
    int even = 0,odd = 0;

    printf("Enter 10 numbers here:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
            even = even+1;
        else
            odd = odd+1;
    }
    printf("Total even numbers are:%d\n", even);
    printf("Total odd numbers are:%d\n", odd);
}
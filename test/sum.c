#include <stdio.h>
//  Calculates the sum and average marks for 5 students

void main()
{
    int marks[5], i;
    float sum = 0, avg;

    printf("Enter the marks of 5 students:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
        avg = sum / 5;
    }
    printf("The sum is:%f\n", sum);
    printf("The average is:%f\n", avg);
}
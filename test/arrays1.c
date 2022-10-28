#include <stdio.h>
// Read two arrays of  size 5 and store the sum of these arrays into tird array

void main()
{
    int arr1[5], arr2[5], sumArr[5];
    int i;

    printf("Enter the values of arr1:\n");
    for (i = 0; i < 5; i++)
        scanf("%d",&arr1[i]);
    printf("Enter the values of arr2:\n");
    for (i = 0; i < 5; i++)
        scanf("%d",&arr2[i]);
    for (i = 0; i < 5; i++)
    {
        sumArr[i] = arr1[i] + arr2[i];
        printf("SumArray element at index %d is:%d\n",i,sumArr[i]);
    }
}

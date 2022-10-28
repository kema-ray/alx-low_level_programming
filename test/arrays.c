#include <stdio.h>
// prints the arrays and its index and the reverse of the arrays 

void main()
{
    int a[5];
    int i;

    printf("Enter the array elements: ");
    for (i = 0; i < 5; i++)
        scanf("%d",&a[i]);
    // for (i = 0; i < 5; i++)
    //     printf("\narray element at index %d is: %d",i,a[i]);
    for (i = 4; i >= 0; i--)
        printf("array element at index %d is: %d\n",i,a[i]); 
}
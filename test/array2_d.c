#include <stdio.h>
/**This program demonstrates how to store the 
elements entered by user in a 2d array and how 
to display the elements of a two dimensional array.*/

/** output */
/** Two dimensional array elements:
234
567 */

int main()
{
    int disp[2][3];
    int i,j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the value of disp[%d][%d]:", i,j);
            scanf("%d", &disp[i][j]);
        }
    }
    printf("Two dimensional array elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", disp[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        } 
    }
    return (0);
}
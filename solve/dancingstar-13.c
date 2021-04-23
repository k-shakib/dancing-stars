#include <stdio.h>
int main()
{
    int number_of_row, i, j, k;
    scanf("%d", &number_of_row); //input row.
    for (i = number_of_row; i > 0; i--)
    {
        // first part
        //
        // *****
        // ****
        // ***
        // **
        // *

        for (j = i; j > 0; j--) //loop for star.
            printf("*");

        k = (number_of_row - i) * 2; // calculate the space number.
        for (j = 0; j < k; j++)      //loop for space.
            printf(" ");

        // last part
        //
        // *****
        //  ****
        //   ***
        //    **
        //     *
        for (j = i; j > 0; j--)
            printf("*");
        printf("\n");
    }
}
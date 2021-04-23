#include <stdio.h>
int main()
{
    int number_of_row_and_colum, i, j, k = 1;
    scanf("%d", &number_of_row_and_colum); //input row number.

    // first part of the structure.

    // ****
    // ***
    // **
    // *

    for (i = number_of_row_and_colum; i > 0; i--)
    {
        for (j = i; j > 0; j--)
            printf("*");
        printf("\n");
    }

    // secound part.

    // **
    // ***
    // ****

    for (i = 2; i <= number_of_row_and_colum; i++)
    {
        for (j = i; j > 0; j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
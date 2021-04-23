#include <stdio.h>
int main()
{
    int number_of_row, i, j, k;
    scanf("%d", &number_of_row); //input row.

    // first part

    // *
    // **
    // ***
    // ****

    k = number_of_row / 2 + number_of_row % 2; //calculate maximum colunm number.for first part.
    for (i = 0; i < k; i++)
    {
        for (j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }

    // last part

    // ***
    // **
    // *

    for (i = number_of_row / 2; i > 0; i--)
    {
        for (j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
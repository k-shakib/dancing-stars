#include <stdio.h>
int main()
{
    int number_of_row_and_colum, i, j;
    scanf("%d", &number_of_row_and_colum);

    // first part
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    for (i = number_of_row_and_colum; i > 0; i--)
    {
        for (j = i; j < number_of_row_and_colum; j++)
            printf(" ");
        for (j = 2 * i - 1; j > 0; j--)
            printf("*");
        printf("\n");
    }

    // second part
    //    ***
    //   *****
    //  *******
    // *********

    for (i = 2; i <= number_of_row_and_colum; i++)
    {
        for (j = i; j < number_of_row_and_colum; j++)
            printf(" ");
        for (j = 2 * i - 1; j > 0; j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
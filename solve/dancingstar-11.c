#include <stdio.h>
int main()
{
    int number_of_row_and_colum, i, j, k;
    scanf("%d", &number_of_row_and_colum);
    if (number_of_row_and_colum > 0) // first line
        printf("*\n");
    if (number_of_row_and_colum > 1) //second line.
        printf("**\n");

    for (i = 3; i < number_of_row_and_colum; i++)
    {

        // except first two line and last line.

        // * *
        // *  *
        // *   *
        // *    *
        // *     *
        // *      *
        // *       *

        printf("*"); // the first star in the row.
        for (j = 2; j < i; j++)
            printf(" "); // space between two star.
        printf("*");     // the last star in the row.
        printf("\n");    // new line
    }
    for (j = 0; j < number_of_row_and_colum; j++)
        printf("*");
}

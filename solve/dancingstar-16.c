#include <stdio.h>
int main()
{
    int number_of_row, i, j, k = 0, l;
    scanf("%d", &number_of_row); //input row.
    k = number_of_row * 2;

    // first line
    //  *****

    for (i = number_of_row * 2; i > 0; i--) // first lines stars.
        printf("*");

    printf("\n");

    for (i = 2; i < number_of_row; i++)
    {
        printf("*");            //first column star
        for (j = 2; j < k; j++) // loop for space.
            printf(" ");
        printf("*"); //last column star.
        printf("\n");
    }

    // last line
    //  *****

    for (i = number_of_row * 2; i > 0; i--) // first lines stars.
        printf("*");

    printf("\n");

    return 0;
}
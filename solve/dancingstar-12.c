#include <stdio.h>
int main()
{
    int number_of_row_and_colum, i, j, k;
    scanf("%d", &number_of_row_and_colum);        //input .row number.
    for (i = 0; i < number_of_row_and_colum; i++) // looping row times .
    {
        k = ((i + 1) * (i + 2)) / 2; // calculating the number of stars in current row.
        for (j = 0; j < k; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
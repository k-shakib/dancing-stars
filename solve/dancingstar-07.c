#include <stdio.h>
int main()
{
    int number_of_row_and_colum, i, j;
    scanf("%d", &number_of_row_and_colum); //input row number.
    for (i = number_of_row_and_colum; i > 0; i--)
    {
        for (j = i; j < number_of_row_and_colum; j++) //inner loop to print space.
            printf(" ");
        for (j = 2 * i - 1; j > 0; j--) //inner loop to print stars.
            printf("*", j);
        printf("\n"); //print new line after finished every line.
    }
    return 0;
}
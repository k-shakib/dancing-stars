#include <stdio.h>
int main()
{
    int number_of_row_and_colum, i, j;
    scanf("%d", &number_of_row_and_colum);         //input number of row and colum
    for (i = 1; i <= number_of_row_and_colum; i++) //outer loop for row
    {
        for (j = 1; j < i; j++) //inner loop for space. it will run one less then row number.
        {
            printf(" ");
        }
        for (j = i; j <= number_of_row_and_colum; j++) //innr loop for star.
        {
            printf("*");
        }
        printf("\n");//after finished the inner loop one line, go to next line.
    }
    return 0;
}

//if there is anything wrong ,please let me know.I will be grateful
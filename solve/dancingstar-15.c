#include <stdio.h>
int main()
{
    int number_of_row, i, j, k;
    scanf("%d", &number_of_row); //input row.
    for (i = number_of_row * 2 - 1; i > 0; i -= 2)
    {
        for (j = i; j > 0; j--)
            printf("*");
        printf("\n");
    }
}
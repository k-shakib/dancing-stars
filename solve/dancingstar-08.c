#include<stdio.h>
int main()
{
    int number_of_row_and_colum,i,j,k=1;
    scanf("%d",&number_of_row_and_colum); //input row number.

    // first part of the structure.
    //    *
    //   ***
    //  *****
    // *******

    for(i=1;i<=number_of_row_and_colum;i++)
    {
        for(j=i;j<number_of_row_and_colum;j++)
        printf(" ");
        for(j=2*i-1;j>0;j--)
        printf("*");
        printf("\n");
    }

    // secound part.
    // *****
    //  ***
    //   *

    for(i=number_of_row_and_colum-1;i>0;i--)
    {
        for(j=number_of_row_and_colum;j>i;j--)
        printf(" ");
        for(j=2*i-1;j>0;j--)
        printf("*");
        printf("\n");
    }
    return 0;
}
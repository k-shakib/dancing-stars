#include<stdio.h>
int main()
{
    int number_of_row_and_colum,i,j;
    scanf("%d",&number_of_row_and_colum); // input number of row.
    for(i=1;i<=number_of_row_and_colum;i++)// it will run number of row times.
    {
        for(j=i;j<=number_of_row_and_colum;j++)//it will run (number of row - i) times where i is  current row number.
        printf(" ");
        for(j=1;j<=i;j++)// it will run i times where i is current row number.
        printf("*");
        printf("\n");
    }
    return 0;
}


//if there is anything wrong ,please let me know.I will be grateful
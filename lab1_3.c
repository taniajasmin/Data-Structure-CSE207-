#include <stdio.h>
#include<stdbool.h>

int main()
{
    int a[100][100], b[100][100], row, col, i, j, k;
    int summation[100][100], substract[100][100], multiply[100][100];

    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &row);

    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &col);

    printf("Elements of the first matrix : \n");

    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    printf("Elements of second matrix : \n");

    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &b[i][j]);
/*
    printf("Summation: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            summation[i][j] = a[i][j] + b[i][j];
            printf("     %d\t",summation[i][j]);
        }
         printf("\n");
    }

    printf("\nSubstraction: \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            substract[i][j] = a[i][j] - b[i][j];
            printf("     %d\t",substract[i][j]);
        }
        printf("\n");
    }

    printf("multiplication: \n");

    for(i = 0; i < row; i++)
    {
        for(j=0; j<col; j++)
        {
            multiply[i][j]=0;
            for(k=0; k<col; k++)
            {
                multiply[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("     %d\t",multiply[i][j]);
        }
        printf("\n");
    }
   */
    while(true)
    {
        printf("1. Addition.\n2. Substraction. \n3. Multiplication.");

        int option;
        scanf("%d", &option);

        if(option == 1)
        {
            printf("Summation: \n");
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    summation[i][j] = a[i][j] + b[i][j];
                    printf("     %d\t",summation[i][j]);
                }
                 printf("\n");
            }
         }
        else if(option == 2)
        {
                printf("\nSubstraction: \n");

                for (i = 0; i < row; i++)
                {
                    for (j = 0; j < col; j++)
                    {
                        substract[i][j] = a[i][j] - b[i][j];
                        printf("     %d\t",substract[i][j]);
                    }
                    printf("\n");
                }

        }
        else if(option == 3)
        {
            printf("multiplication: \n");

            for(i = 0; i < row; i++)
            {
                for(j=0; j<col; j++)
                {
                    multiply[i][j]=0;
                    for(k=0; k<col; k++)
                    {
                        multiply[i][j] += a[i][k] * b[k][j];
                    }
                }
            }

            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    printf("     %d\t",multiply[i][j]);
                }
                printf("\n");
            }
        }
         else
            break;
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int A[10][10];
    int r,c,row, col, sum = 0;
    printf("Enter the no. of rows and columns of matrix:\n");
    scanf("%d%d",&r,&c);
    printf("Enter elements in matrix of size %dx%d: \n", r, c);
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    printf("The matrix is:\n");
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            printf("%d\t", A[row][col]);
        }
        printf("\n");
    }
    for(row=0; row<r; row++)
    {
        sum = 0;
        for(col=0; col<c; col++)
        {
            sum += A[row][col];
        }

        printf("Sum of elements of Row %d = %d\n", row+1, sum);
    }
    for(row=0; row<r; row++)
    {
        sum = 0;
        for(col=0; col<c; col++)
        {
            sum += A[col][row];
        }

        printf("Sum of elements of Column %d = %d\n", row+1, sum);
    }
}

/**
 * C program to find transpose of a matrix
 */
 
#include <stdio.h>
 
int main()
{
    int A[3][3], B[3][3];
    int row, col;
 
    /*
     * Reads elements in matrix A from user
     */
    printf("Enter elements in matrix of size 3x3: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
 
    /*
     * Finds the transpose of matrix A
     */
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            /* Stores each row of matrix A to each column of matrix B */
            B[row][col] = A[col][row];
        }
    }
     
    /*
     * Prints the original matrix A
     */
    printf("\nOriginal matrix: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", A[row][col]);
        }
 
        printf("\n");
    }
     
    /*
     * Prints the transpose of matrix A
     */
    printf("Transpose of matrix A: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", B[row][col]);
        }
 
        printf("\n");
    }
 
    return 0;
} 

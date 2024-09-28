#include <stdio.h> 
main()
{
    int mat[10][10];
    int r,c,t=0,i,j;
    printf("Enter the no. of rows and columns in matrix:- \n");
    scanf("%d%d",&r,&c);
    printf("Enter elements of matrix: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nThe Enterd matrix is: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d \t", mat[i][j]);
            if (mat[i][j]>t)
            {
            	t=mat[i][j];
			}
        }
        printf("\n");
    }
    printf("The Largest element of the matrix is %d",t);
}

# include <stdio.h>
main()
{
int mat[10][10] ;
int i, j, row, col, big;
printf("Enter the no. of rows and columns of the matrix :\n ") ;
scanf("%d %d", &row, &col) ;
printf("\nEnter the elements of the matrix : \n") ;
for(i = 0 ; i < row ; i++)
  for(j = 0 ; j < col ; j++)
    scanf("%d", &mat[i][j]) ;
printf("The matrix is:\n");
for(i = 0 ; i < row ; i++)
{
  for(j = 0 ; j < col ; j++)
  {
    printf("%d\t", mat[i][j]) ;
  }
  printf("\n");
}
big = 0 ;
for(i = 0 ; i < row ; i++)
{
  for(j = 0 ; j < col ; j++)
  {
    if(mat[i][j] > big)
      big= mat[i][j] ;
  }
}
printf("\nThe biggest element in the matrix is : %d\n\n",big);
}

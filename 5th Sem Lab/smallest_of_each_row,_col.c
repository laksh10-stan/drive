#include<stdio.h>
 main()
{
   int m, n, c, d, matrix[10][10],small,e;
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d",&m,&n);
   printf("Enter the elements of matrix\n");
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         scanf("%d",&matrix[c][d]);
      }
   }
   printf("The matrix is:\n");
    for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         printf("%d\t",matrix[c][d]);
      }
      printf("\n");
   }
 
    small=matrix[0][0];
   for( c = 0 ; c < m ; c++ )
   {  
      small=matrix[c][0];
      for( d = 0 ; d < n ; d++ )
      {
         if ( matrix[c][d] < small )
            small = matrix[c][d];
      }
      e=c+1;
      printf("The smallest element in row %d is %d\n",e,small);
   }
   for( c = 0 ; c < n ; c++ )
   {  
      small=matrix[0][c];
      for( d = 0 ; d < m ; d++ )
      {
         if ( matrix[d][c] < small )
            small = matrix[d][c];
      }
      e=c+1;
      printf("The smallest element in column %d is %d\n",e,small);
   } 
} 

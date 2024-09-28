#include <stdio.h>
main()
{
   int m, n, c, d, matrix[10][10], transpose[10][10];
   printf("Enter the number of rows and columns of matrix:-\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of matrix\n");
   for (c = 0; c < m; c++)
   {
      for(d = 0; d < n; d++)
      {
         scanf("%d",&matrix[c][d]);
      }
   } 
    printf("The entered matrix is:-\n");
    for (c = 0; c < m; c++)
       {
      for(d = 0; d < n; d++)
      {
         printf("%d\t",matrix[c][d]);
      }
         printf("\n");
     }
   for (c = 0; c < n; c++)
   {
      for( d = 0 ; d < m ; d++ )
      {
         transpose[c][d] = matrix[d][c];
      }
   }
   printf("Transpose of entered matrix :-\n");
 
   for (c = 0; c < n; c++) 
   {
      for (d = 0; d < m; d++)
      {
         printf("%d\t",transpose[c][d]);
      }
      printf("\n");
   }
}

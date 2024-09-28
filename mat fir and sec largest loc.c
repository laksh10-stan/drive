#include<stdio.h>
#include<conio.h>
 
main()
{
   int m, n, c, d,s, matrix[10][10], maximum;
 
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
 
   maximum = matrix[0][0];
 
   for( c = 0 ; c < m ; c++ )
   {
      for( d = 0 ; d < n ; d++ )
      {
         if ( matrix[c][d] > maximum )
            s=maximum;
            maximum = matrix[c][d];
            
      }
   }
 
   printf("Largest element in matrix is %d\n", maximum);
   printf("Second Largest element in matrix is %d\n", s);
 
   getch();
   return 0;
}

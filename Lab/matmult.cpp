#include <stdio.h>
 
 main()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
   printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
     if (n != p)
   printf("Matrices with entered orders can't be multiplied with each other.\n");
else
  {
  printf("Enter the elements of first matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
    printf("Enter the elements of second matrix\n");
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 printf("The first matrix is:\n");
 for (c = 0; c < m; c++)
 {
    for (d = 0; d < n; d++)
    {
      printf("%d\t", first[c][d]);
    }
    printf("\n");
 }
 printf("The second matrix is:\n");
 for (c = 0; c < p; c++)
 {
    for (d = 0; d < q; d++)
    {
      printf("%d\t", second[c][d]);
    }   
    printf("\n");
 } 
    
    for (c = 0; c < m; c++)
	 {
      for (d = 0; d < q; d++) 
	  {
        for (k = 0; k < p; k++) 
		{
          sum = sum + first[c][k]*second[k][d];
        }
        multiply[c][d] = sum;
        sum = 0;
      }
    }
    printf("Product of entered matrices:-\n");
    for (c = 0; c < m; c++)   
	{
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
}
 
  

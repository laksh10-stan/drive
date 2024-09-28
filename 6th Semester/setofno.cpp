#include<stdio.h>
main()
{
	int n,i,j,k;
	printf("Enter the no:\n");
	scanf("%d",&n);
	
	for(i=-100;i<=100;i++)
	{
	
	for(j=-100;j<=100;j++)
	{
	
	for(k=-100;k<=100;k++)
	{
		if(n==i+j+k)
		{
			printf("(%d,%d,%d)\n",i,j,k);
		}
	}
   }
   }
}

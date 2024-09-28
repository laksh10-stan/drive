#include<stdio.h>
#include<conio.h>
main()
{
	int r,c,i,j,k,l,r1,sum=0;
	printf("enter the no of rows\n");
	scanf("%d",&r);
	printf("enter the no of columns\n");
	scanf("%d",&c);
	int A[r][c];
	i=r*c;
	printf("enter the %d elemnts of Matrix\n",i);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter the column along which you want to get the sum\n");
	scanf("%d",&r1);
	printf("The result as per requirement is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",A[i][j]);
			if(j==(r1-1)&&i==(r-1))
		{
			for(l=r1-1,k=0;k<r;k++)
		{
			sum=sum+A[k][l];
		}
		printf("\n%d",sum);
		}
		}
		/*if(i==(r1-1))
		{
			for(j=0;j<c;j++)
		{
			sum=sum+A[i][j];
		}
		printf("%d",sum);
		}*/
		printf("\n");
	}
}

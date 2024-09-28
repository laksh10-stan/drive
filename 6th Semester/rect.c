#include<stdio.h>
main()
{
	int l,b,i,j,k;
	printf("Enter the length and breadth of the recangle:\n");
	scanf("%d%d",&l,&b);
	k=l-2;
	for (i=0;i<l;i++)
	{
		printf(".");
	}
	printf("\n");
	for(i=0;i<b;i++)
	{
		printf(".");
		for(j=0;j<k;j++)
		{
			printf(" ");
		}
		printf(".\n");
	}
		for (i=0;i<l;i++)
	{
		printf(".");
	}
}

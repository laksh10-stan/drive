#include<stdio.h>
main()
{
	int i,j,r,c,rc,z,ro,co,l=0;
	printf("Enter the no. of rows:\n");
	scanf("%d",&r);
	printf("Enter the no. of columns:\n");
	scanf("%d",&c);
	int A[r][c]; rc=r*c;
	printf("Enter the %d elements of matrix\n",rc);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("The Entered matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("Press 1 to test for row and 2 to test for column:\n");
	scanf("%d",&z);
	switch(z)
	{
		case 1:
			printf("Enter the row to be tested:\n");
			scanf("%d",&ro);
			for(i=ro-1,j=0;j<c;j++)
			{
				if(A[i][j]>l)
				l=A[i][j];
			}
			printf("The largest no. is %d\n",l);
			for(i=ro-1,j=0;j<c;j++)
			{
				if(A[i][j]<l)
				l=A[i][j];
			}
			printf("The Smallest no. is %d\n",l);
			break;
			case 2:
			printf("Enter the column to be tested:\n");
			scanf("%d",&co);
			for(j=co-1,i=0;i<r;i++)
			{
				if(A[i][j]>l)
				l=A[i][j];
			}
			printf("The largest no. is %d\n",l);
			for(j=co-1,i=0;i<r;i++)
			{
				if(A[i][j]<l)
				l=A[i][j];
			}
			printf("The Smallest no. is %d\n",l);
			break;
			default:
				printf("Enter valid data (either 1 or 2)");
				break;
	}
	
}

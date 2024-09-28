#include <stdio.h>
#include <conio.h>
void main() 
{
	int i,j,k,samp=1,n;
	printf("Enter the no. of rows:\n");
	scanf("%d",&n);
	for (i=1; i<=n; i++) 
	{
		for (k=samp; k<=n; k++) 
		{
			printf(" ");
		}
		for (j=0; j<i; j++) 
		{
			printf("*");
		}
		samp = samp + 1;
		printf("\n");
	}
	samp = 1;
	n=n-1;
	for (i=n; i>=1; i--) 
	{
		for (k=samp; k>=0; k--) 
		{
			printf(" ");
		}
		for (j=i; j>=1; j--) 
		{
			printf("*");
		}
		samp = samp + 1;
		printf("\n");
	}
	getch();
}

#include <stdio.h>
#include <conio.h>
void main() {
	int i,y,n,k,l;
	printf("Enter the no. of rows");
	scanf("%d",&n);
	
	for (y=0,k=1;y<n; y++,k++) 
	{   
	    k=n-y-1;
		for(l=0;l<=k;l++)
		{
			printf(" ");
		}
		for(i=0-y;i<=y;i++)
		{
		printf("%d",abs(i));
		}
		printf("\n");
	}
}


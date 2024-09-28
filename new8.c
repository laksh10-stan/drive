#include <stdio.h>
#include <conio.h>
void main() {
	int i,j,k,t=0,n;
	printf("Enter the no. of rows:\n");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++) 
	{
		for (k=t; k<n; k++)
		 {
			printf(" ");
	   	 }
		for (j=0; j<i; j++) 
		{
			printf(" * ");
			t = t + 1;
		}
		printf("\n");
	}
	getch();
}

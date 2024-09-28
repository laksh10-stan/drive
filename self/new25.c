#include <stdio.h>
#include <conio.h>
void main() {
	int i,j,k,l,n,y,x=40;
	printf("Enter the no. of rows");
	scanf("%d",&n);
	L:
	for (i=1; i<=n; i++)
	 {
		for (j=1; j<=n-i; j++) 
		{
		printf("   ");
				for (y=0;y<=n; y++)
				 {
		for(k=0-y;k<=y;k++)
		{
		printf("%3d",abs(k));
		}
		printf("\n");
		x=x-3;
		goto L;
	    }
		}
	}
	getch();
}


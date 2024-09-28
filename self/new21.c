#include <stdio.h>
#include <conio.h>
void main() {
	int i,j,k,l,n;
	printf("Enter the no. of rows");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++) {
		for (j=1; j<=n-i; j++) {
			printf("   ");
		//	printf("%d",l);
		}
		for (k=1; k<=2*i-1; k++) {
			printf(" %d ",k);
		}
		printf("\n");
	}
	getch();
}


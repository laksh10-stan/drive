#include<stdio.h>
int main()
{
	int n,i,j=1;
	printf("enter the number of terms to be printed\n");
	scanf("%d",n);
	for(i=0;i<n;i++)
	{
		j=j*10;
		printf("j+1,\t");
	}
	return 0;
}

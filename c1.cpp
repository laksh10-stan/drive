#include<stdio.h>
int fc(int k);
int main()
{
	int n,i,j=1,k=1;
	printf("enter the number of terms to be printed\n");
	scanf("%d",&n);
	fc(n);
/*	printf("1  ");
	for(i=0;i<n;i++)
	{
		j=j*10+1;
		printf("%d  ",j);
	}*/
	return 0;
}
int fc (int k)
{
	int i,n,j=1;
	printf("1  ");
for(i=0;i<k-1;i++)
	{
		j=j*10+1;
		printf("%d  ",j);
		
	}	
	
}

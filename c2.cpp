#include<stdio.h>
int fc(int k);
int main()
{
	int n;
	printf("enter the number of terms to be printed\n");
	scanf("%d",&n);
	fc(n);
	return 0;
}
int fc(int n)
{
	int i,f1=0,f2=1,f;
	printf("0, 1");
	for(i=0;i<n-2;i++)
	{
		f=f1+f2;
		f1=f2;
		f2=f;
		printf(" ,%d",f);
	}
}

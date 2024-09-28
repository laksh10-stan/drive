#include<stdio.h>

int fact(int );
main()
{
	int n,r;
	float result;
	printf("enter the  value of n and r ");
	scanf("%d %d",&n,&r);
	result=fact(n)/fact(n-r);
	printf("result is %f",result);
	
}

	int fact (int num)
	{
	
	int f=1,i;
	for(i=1;i<=num;i++)
	{
	
	
f=f*i;
	}
return f;
}

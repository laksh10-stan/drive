#include<stdio.h>

int max(int n1,int n2);
main()
{
	int a,b,c;
	printf("enter the  two number");
	scanf("%d %d",&a,&b);
	c=max(a,b);
	printf("the max is %d",c);
	
}

	int max (int n1,int n2)
	{
	
	int x;
	if(n1>n2)
	
	x=n1;

	else
x=n2;
return x;
}

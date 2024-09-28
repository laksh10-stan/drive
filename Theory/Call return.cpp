#include <stdio.h>
#include <conio.h>
int max (int n1,int n2);
main()
{
	int a,b,c;
	printf ("Enter the two numbers\n");
	scanf ("%d%d",&a,&b);
	c=max(a,b);
	printf ("The max is %d",c);
	
}
int max(int n1,int n2)
{
	int res;
	if(n1>n2)
	res=n1;
	else
	res=n2;
	return res;
}

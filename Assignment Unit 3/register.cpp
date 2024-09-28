#include <stdio.h>
#include <conio.h>
int exp (int a,int b);
main()
{
	int a=3,b=5,res;
	res=exp(a,b);
	printf ("%d to the power %d=%d\n",a,b,res);
}
int exp (int a,int b)
{
	register int res=1;
	int i=1;
	for (i=1;i<=b,i++)
	res=res*b;
	return res;
}

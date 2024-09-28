#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=0,c=0,d;
	printf ("Enter the valve of n:\n");
	scanf ("%d",&a);
	do
	{
	c=c+b;
	b=b+1;	
	}while (b<=a);
	printf ("%d",c);
}

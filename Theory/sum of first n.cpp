#include <stdio.h>
#include <conio.h>
main()
{
	int n,i,a=0;
	printf ("Enter the valve of n:\n");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
	a=a+i;
	}
	printf ("sum of first n numbers is %d",a);
}

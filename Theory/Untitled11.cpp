#include <stdio.h>
#include <conio.h>
main()
{
	int m,n,i=m,a=0;
	printf ("Enter the valve of m and n:\n");
	scanf ("%d%d",&m,&n);
	for (i=m;i<=n;i++)
	{
	a=i+a;
	}
	printf ("sum of first n numbers is %d",a);
}

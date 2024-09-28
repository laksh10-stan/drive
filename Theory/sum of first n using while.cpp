#include <stdio.h>
#include <conio.h>
main()
{
	int a=0,n,c,i=1;
	printf ("Enter the value of n:\n");
	scanf ("%d",&n);
	while (i<=n)
	{
	a=a+i;
	i=i++;	
	}
	printf ("Sum of first n numbers is %d",a);
}

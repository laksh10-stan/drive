#include <stdio.h>
#include <conio.h>
main()
{
	int a,b=0,c=0;
	printf ("Enter the valve of n:\n");
	scanf ("%d",&a);
	while (b<=a)
	{
		c=c+b;
		b=b+1;
	}
	printf ("%d",c);
}

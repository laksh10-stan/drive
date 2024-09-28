#include <stdio.h>
#include <conio.h>
main()
{
	int n,a=0,b=1,next,d;
	printf ("Enter the no. of terms\n");
	scanf ("%d",&n);
	printf ("%d\n",a);
	printf ("%d\n",b);
	for (d=2;d<n;d++)
	{
		next=a+b;
		a=b;
		b=next;
		printf ("%d\n",next);
	}
	printf ("THANKS");
}

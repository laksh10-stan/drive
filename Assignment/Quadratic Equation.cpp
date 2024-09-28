#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	int a,b,c,d;
	float x,y;
	printf ("Enter the values of a,b and c\n");
	scanf ("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	printf ("D=%d",d);
	if (d==0)
	{
		printf ("\nOnly one root\n");
		x=(-b)/(2*a);
		printf ("\nRoot is %f",x);
	}
	else if (d>0)
	{
		printf ("\nTwo different roots\n");
		x=(-b+sqrt(d))/(2*a);
		y=(-b-sqrt(d))/(2*a);
		printf ("\nFirst Root is %f",x);
		printf ("\nSecond Root is %f",y);
	}
	else
	printf ("No real roots");
}


#include <stdio.h>
#include <conio.h>
main()
{
	int a,b;
	printf ("Enter two numbers:\n");
	scanf ("%d%d",&a,&b);
	if(a>b)
	{
		printf ("The largest of the two numbers is %d",a);
	}
	else if (a<b)
	{
	    printf ("The largest of the two numbers is %d",b);
	}
	else 
	printf ("Both numbers are equal");
}

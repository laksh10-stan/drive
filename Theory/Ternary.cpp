#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,c;
	printf ("Enter two operends:\n");
	scanf ("%d%d",&a,&b);
	c=a<b?b:a;
	printf ("\nc=%d",c);
	c=a>b?a:b;
	printf ("\nc=%d",c);
	c=a<b?a:b;
	printf ("\nc=%d",c);
	c=a>b?b:a;
	printf ("\nc=%d",c);
}

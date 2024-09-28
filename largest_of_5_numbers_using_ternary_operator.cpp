#include <stdio.h>
#include <conio.h>
 main ()
{
	int a,b,c,d,e;
	int t1,t2,t3,t4;
	printf ("enter the 5 numbers \n");
	scanf ("%d%d%d%d%d",&a, &b, &c, &d, &e);
	t1=(a>b?a:b);
	t2=(c>d?c:d);
	t3=(t1>t2?t1:t2);
	t4=(t3>e?t3:e);
	printf ("The largest of 5 numbers is %d",t4);
	
}

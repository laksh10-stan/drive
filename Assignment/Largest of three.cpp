#include <stdio.h>
#include <conio.h>
main()
{
int x,y,z;
printf ("Enter 3 numbers\n");
scanf ("%d%d%d",&x,&y,&z);
if (x>y&&x>z)
{
	printf ("The largest no. is %d",x);
}
else if (y>z&&y>x)
{
	printf ("The largest no. is %d",y);
}
else if (z>x&&z>y)
{
	printf ("The largest no. is %d",z);
}
else
printf ("Operends are equal");
if (x<y&&x<z)
{
		printf ("The smallest no. is %d",x);
}
else if (y<z&&y<x)
{
		printf ("The smallest no. is %d",y);
}
else if (z<x&&z<y)
{
	printf ("The smallest no. is %d",z);	
}
else ("Operends are equal");
}

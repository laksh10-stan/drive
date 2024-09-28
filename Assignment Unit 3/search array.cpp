#include <stdio.h>
#include <conio.h>
main()
{
	int a[20],i,x,f=0;
	for (i=0;i<5;i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("Array Display:\n");
	for (i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf ("Element to be searched:\n");
	scanf ("%d,&x");
	for (i=0;i<5;i++)
	{
		if (x==a[i])
		{
			f=1;
		}
	}
	if (f==1)
	printf ("Found");
	else 
	printf ("Not Found");
}



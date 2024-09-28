#include <stdio.h>
#include <conio.h>
main()
{
	int a[20],i,j,n;
	printf ("Enter the value of n:\n");
	scanf ("%d",&n);
	printf ("Enter the value of array element");
	for (i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("Array Display:\n");
	for (j=0;j<n;j++)
	{
		printf("a[%d]=%d",j,a[j]);
	}
}



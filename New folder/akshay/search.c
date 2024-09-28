#include<stdio.h>

main()
{
	 int a[10],i,n,x,f=0;

	printf("enter n");
	scanf("%d",&n);
		printf("enter  the value of array element ");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);	
		}
		printf("array display\n ");
for(i=0;i<n;i++)
printf("%d\t",a[i]);

printf("enter  the search  element ");
scanf("%d",&x);
		for(i=0;i<n;i++)
		{
if(x==a[i])
{
f=1;}
		
		}
if(f==1)
printf("found");
else
printf(" not found");}

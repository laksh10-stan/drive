#include<stdio.h>
main()
{
int i,j,n;
printf ("Enter the no. of rows\n");
scanf ("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d\t",j);
}
printf("\n");
}
}

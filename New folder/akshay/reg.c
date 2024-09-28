#include<stdio.h>
int exp1(int a,int b);
main()
{
int a,b,res;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
res=exp1(a,b);
printf("%d to the power of %d=%d",a,b,res);
return 0;
}
int exp1(int a,int b)
{
register int res=1;
int i;
for(i=1;i<=b;i++)
res=res*a;
return res;
}

#include <stdio.h>
int exp1(int a,int b);
main()
{
int a=10,b=2,res;
res=exp1(a,b);
printf("%d power of %d =%d",a,b,res);
return 0;
}
int exp1(int a,int b)
{
register int res=1;
int i;
for(i=1;i<=b;i++)
res=res*a;
return res;}

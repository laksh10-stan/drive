#include<stdio.h>
#include<math.h>
main()
{
int num,bv,dv=0,base=1,rem;
printf("Enter a binary number\n");
scanf("%d",&num);
bv=num;
while(num!=0)
{
rem=num%10;
dv=dv+rem*base;
num=num/10;
base=base*2;
}
printf("\n%d in decimal is %d\n",bv,dv);
}



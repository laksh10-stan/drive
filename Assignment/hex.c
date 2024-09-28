#include<stdio.h>
#include<math.h>
main()
{
int num,bv,dv=0,base=1,rem;
printf("Enter a binary number\n");
scanf("%d",&num);
bv=num;
while(num>16)
{
rem=num%8;
dv=dv+rem*base;
num=num/8;
base=base*2;
}
printf("\n%d in hex is %d\n",bv,dv);
}



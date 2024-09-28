#include<stdio.h>
#include<math.h>
int bd(int number);
main()
{
int number;
printf("Enter a binary number\n");
scanf("%d",&number);
printf("\n\n\t%d in Decimal",bd(number));
}
int bd(int number)
{
int decimal=0,i=0,rem,base=1;
while(number!=0)
{
rem=number%10;
decimal=decimal+rem*base;
number=number/10;
base=base*2;
}
return decimal;
}

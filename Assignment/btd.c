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
int rem;
float i=0,decimal=0,k;
while(number!=0)
{
rem=number%10;
k=number=number/10;
float powf(float 2,float i);
decimal=decimal+rem*k;
++i;
}
return decimal;
}

#include<stdio.h>
#include<math.h>
int db(int number);
main()
{
int number;
printf("Enter a decimal number\n");
scanf("%d",&number);
printf("%d in binary\n",db(number));
}
int db(int number)
{
int binary=0,i=1,rem;
while(number!=0)
{
rem=number%2;
binary=binary+rem*i;
number=number/2;
i=i*10;
}
return binary;
}

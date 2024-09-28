#include<stdio.h>
int rev (int a);
main()
{
int num,res;
printf("Enter the number\n");
scanf("%d",&num);
res=rev(num);
printf ("%d\n",res);
if (res==num)
{
printf("The number is a palindrome\n");
}
else
printf("The number is not a palindrome\n");
}
int rev(int a)
{
static int b,c=0,s;
if(a==0)
{
return 0;
}
else
{

b=a%10;
c=c*10;
c=b+c;
 rev(a/10);
}
return c ;
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
unsigned long long fact(int n);
main()
{
int n;
unsigned long long result;
printf("Enter the number whose factorial is to be calculated:\n");
scanf("%d",&n);
result=fact(n);
printf("Factorial=%lld",result);	
}
unsigned long long fact(int n)
{
   unsigned long long a;
   int i,s=1;
	for(i=n;i>=1;i--)
	{
		s=s*i;
	}
	return s;
	
}

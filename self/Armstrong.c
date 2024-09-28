#include<stdio.h>
#include<math.h>
main()
{
	int n,a,b,sum=0,temp1,count=0,p;
	printf("Enter a number:\n");
	scanf("%d",&n);
	temp1=n;
	while(temp1!=0)
	{
		temp1=temp1/10;
		count++;
	}
	printf("The no. of digits = %d:\n",count);
	temp1=n;
	while(temp1!=0)
	{
		a=temp1%10;
		sum+=pow(a,count);
		temp1=temp1/10;
	}
	printf("%d\n",sum);
	if(sum==n)
	printf("Armstrong's number:\n");
	else
	printf("Not an armstrong's number:\n");
}

#include <stdio.h>
main()
{
	int n,temp,a,sum=0,temp1,b,sum2=0,temp3;
	printf("Enter a number:\n");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		a=temp%10;
		sum+=a;
		temp/=10;
	}
	printf("Sum of digits=%d\n",sum);
	temp1=sum;
	printf("%d\n",temp1);
	while(temp1!=0)
	{
		sum2=sum2*10;
		sum2+=temp1%10;
		temp1/=10;
	}
	printf("Reverse of digits=%d\n",sum2);
	temp3=sum*sum2;
	printf("Product of sum of digits and sum of reverse of digits is %d\n",temp3);
	if(temp3==n)
	{
		printf("Magic number:\n");
	}
	else{
		printf("Not a magic number:\n");
	}
}

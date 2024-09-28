#include<stdio.h>
int a1(int number);
main()
{
	int num,b;
	printf("enter the  number:");
	scanf("%d",&num);
	b=a1(num);
	if(b==0)
	{
	printf("%d is  the even number\n",num);	
	}
	else
	{
		printf("%d is  the odd number\n",num);	
	}	
}
	int a1(int z)
	{
	
	if(z%2==0)
	return 0;
	
	else
return 1;

}

#include<stdio.h>
int factori(int n);
 int main()
{
	 int fact;
	int number;
	printf("enter the   number");
	scanf("%d",&number);
	fact=factori(number);
	printf("the factorial of %d is %d",number,fact);
	
}

int factori(int n)
	{
	
	int i;
 int factorial=1;
	for(i=1;i<=n;i++)
	factorial=factorial*i;
	


return (factorial);
}

#include<stdio.h>


int decimal_binary(int number);
 main()
{
	int n;
	printf("Enter a decimal number:\n");
	scanf("%d",&n);
	printf("\n\n\t%d in binary",decimal_binary(n));
	return (0);
}
int binary_decimal(int n)
{
	int rem=0,i=1,binary=0;
	while(n!=0)
	{
		rem=n%2;
		n=n/2;
		binary=binary+rem*i;
		i=i*10;
	}
	return binary;
}


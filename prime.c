#include <stdio.h>
int main()
{
	int n,i,j,flag=0;
	printf("Enter a number \n");
	scanf("%d",&n);
	printf("prime no between 2 and %d are :",n);
	for (i=2;i<n/2;i++)
	{
		if(n%10==0)
		{
			flag=1;
			break;
		}
		for(j=2;j<=i/2;j++)
		{
			if (i%j==0)
			{
				flag=0;
				break;
			}
		}
		if (flag==1)
		printf("%d is prime number",n);
		
	}
	return 0;
	
}

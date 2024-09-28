#include <stdio.h>
int fact(int);
void main()
{
	int n,m ;
	printf("Enter a number \n");
	scanf("%d",&n);
	m=fact(n);
	printf("factorial is =%d\n",m);
}
int fact (int n)
{
	int i ,fact=1 ;
	for(i=1;i<=n;i++)
	{
		fact=fact*i ;
		
	}
     return fact;
 }


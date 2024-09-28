#include<stdio.h>
#include<math.h>
int main()
{
		int y=pow(3,2);
		printf("%d",&y);
	int t,n,i,c=0,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		while(n!=0)
		{
			x=pow(n,0.5);
			printf("%d",&x);
			for (i=1;i<=x;i++)
			{
				if(i*i>n)
				{
					i--;
					n=n-i*i;
					c++;
				}
			}	
		}
		printf("%d\n",c);
	}
	
	
}

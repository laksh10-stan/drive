#include<stdio.h>
#include<conio.h>
  int main()
{
	int n,c,k;
	printf("Enter a decimal number:\n");
	scanf("%d",&n);
	printf("%d in binary\n",n);
for(c=8;c>=0;c--)
{
	k=n>>c;
	if(k&1)
printf("1");
else
printf("0");	
}
printf("\n");
}
	


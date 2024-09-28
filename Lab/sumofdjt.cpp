#include <stdio.h>
#include <conio.h>
main()
{    int i;
	int num, s=0;
	int a;
	printf ("enter the values of num\n");
	scanf ("%d",&num);
	for(i=num;i>0,i=i/10)
	{
		a=i%10;
	
		s=s+a;
		
	}
	printf ("sum of digits is %d",s);
}

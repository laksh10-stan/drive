#include <stdio.h>
#include <conio.h>
main()
{
	int num, s=0;
	int a;
	printf ("enter the values of num\n");
	scanf ("%d",&num);
	while (num>0)
	{
		s=s+num%10;
		num=num/10;
		
		
	}
	printf ("sum of digits is %d",s);
}

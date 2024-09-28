#include <stdio.h>
#include <conio.h>
main()
{
	int num,s=0;
	printf ("Enter the number\n");
	scanf ("%d",&num);
	while (num>0)
	{
		s=s*10;
		s=s+num%10;
		num=num/10;
		
	}
	printf ("Reverse is %d",s);
}

#include <stdio.h>
#include <conio.h>
void swap (int,int);
main()
{
	int m,n;
	printf ("Enter two numbers:\n");
	scanf ("%d%d",&m,&n);
	swap(m,n);
}
void swap (int a,int b)
{
	int t;
    t=a;
	a=b;
	b=t;
	printf ("Value after swap a=%d and b=%d",&a,&b);
}

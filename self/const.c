#include<stdio.h>
main()
{
	int a=234e3,b=-7.5E-8,c=2476;
	const int m=568;
		const volatile int t=990;
	//m++;
	printf("%d\n",m);
	volatile int x=390;
	x++;
	printf("%d\n",x);
	//const volatile int t=990;
//	t++;
	printf("%d",t);
		
}

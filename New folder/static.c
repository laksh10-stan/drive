#include<stdio.h>

void fun();
main()
{
printf("first call fun()");
	
	fun();
	printf("second call fun()");
	fun();
	printf("third call fun()");
fun();
}

	void fun()
{
	static int x;
	int y=0;
	printf("x=%d",x);
		printf("y=%d",y);
		x++;
		y++;
}


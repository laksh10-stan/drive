#include<stdio.h>
void fun();
main()
{
printf("first call fun()\n");
	
	fun();
	printf("second call fun()\n");
	fun();
	printf("third call fun()\n");
fun();
}

	void fun()
{
	static int x;
	int y=0;
	printf("x=%d\n",x);
		printf("y=%d\n",y);
		x++;
		y++;
}


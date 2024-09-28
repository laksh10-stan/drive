#include <stdio.h>
#include <conio.h>
int x;
void fun(void);
main()
{
    x=10;
	printf ("x in file 1=%d:\n",x);
	fun();
}

void fun()
{
	printf ("x in file 2=%d\n",x);
	
}



#include <stdio.h>
#include <conio.h>
void fun();  
 main()
{
	printf ("First call fun()");
	fun();
	printf("Second Call fun()");
	printf ("Third call fun()");
	
}
void fun()
{
	static int x;
	int y=0;
	printf ("x=%d",x);
	printf ("y=%d",y);
	x++;
	y++;

}

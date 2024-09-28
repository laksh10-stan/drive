#include<stdio.h>

union point2
{
	int x,y;
};
struct point1
{
	int x,y;
}
main()
{
	struct point1 P1;
	union point2 P2;
	P1.x=4;
	P1.y=5;
	printf("x=%d and y=%d\n",P1.x,P1.y);
P2.x=4;
P2.y=5;
		printf(" x=%d and y=%d\n",P2.x,P2.y);
	}

#include <stdio.h>
#include<graphics.h>
int main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"");
	rectangle(150,50,400,150);
	closegraph();
}

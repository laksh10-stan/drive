#include <stdio.h>
#include <conio.h>
float cal_area(float r);
main()
{
	float area, radius;
	printf ("Enter the value of radius:\n");
	scanf ("%f",&radius);
	area=cal_area (radius);
	printf ("Area of circle is %f",area);
}
float cal_area(float r)
{
	float x;
	x=3.14*r*r;
	return x;
}

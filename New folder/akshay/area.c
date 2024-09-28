#include<stdio.h>
float cal_area(float r);
main()
{
	float area, radius;
	printf("enter radius of circle\n");
	scanf("%f",&radius);
	area = cal_area(radius);
		printf("area of circle is %f",area);
}

float cal_area (float r)
	{
	
	float x;
	x=3.14*r*r;
	return x;	
}

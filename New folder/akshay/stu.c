#include<stdio.h>

struct student{
	int r;
	char name;float h;
	int year;
};
main()
{
	struct student s;
	
	printf("enter the roll no.,name,height,year of birth\n");
	scanf("%d %s %f %d",&s.r,&s.name,&s.h,&s.year);
	printf("the display\n");
			printf("roll no.is%d\n name is%c\n height is%f year is%d", s.r ,s.name,s.h,s.year);
		}

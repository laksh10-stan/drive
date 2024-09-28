#include <stdio.h>
#include <conio.h>
struct student
{
	
	int r;
	char name[50];
	float h;
	int year;
};
main()
{
	struct student s1;
	printf ("Enter Rollno, name,height,year of birth of a student:");
	scanf("%d%s%f%d",&s1.r,s1.name,&s1.h,&s1.year);
	printf("The Display:\n");
	printf("Rollno=%d\nName=%s\nHeight=%f\nYear=%d",s1.r,s1.name,s1.h,s1.year);
}



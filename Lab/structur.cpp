#include<stdio.h>
#include<conio.h>
struct student
{    int i;
	char name [50];
	int roll_no;
	int age;
	
	
}s[10];
main()
{
	int i;
	for (i=0;i<10;i++)
	{
		printf ("Enter name, roll_no,age\n");
		scanf("%s%d%d",s[i].name, &s[i].roll_no , &s[i].age);
		
	}
	for(i=0;i<10;i++)
	{
	 printf("\nEnter name is %s\nroll_no is%d\nage is %d",s[i].name,&s[i].roll_no ,&s[i].age);	
	}
}

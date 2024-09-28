#include<stdio.h>
struct stu{
	char name[20];
	int marks;
	
}s[10];
main()
{
	struct stu *ptr=s;
	int n,i,b=1;
	printf("Enter the no. of students:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the name of student no. %d:\n",b);
		scanf("%s",&ptr->name);
		printf("Enter the marks of student no. %d:\n",b);
		scanf("%d",&ptr->name);
		b++;
		ptr++;
	}
	for(i=0;i<n;i++)
	{
	ptr--;
	}
	printf("The details of %d students are:\n",n);
	printf("Student Name\tStudentmarks\t\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t\t",ptr->name);
		printf("%d\t\t\n",ptr->marks);
		ptr++;
	}
}

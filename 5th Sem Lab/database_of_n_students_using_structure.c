#include<stdio.h>
struct student
{
char e_no[7];
char r[10];
char branch[50];
char name[50];
float marks;
}s1[50];
main()
{
int i,n;
//struct student s1[50];
printf("Enter the number of students:\n");
scanf("%d",&n);
printf("Enter Enrolment no., Roll no., Branch, Name, Marks of %d students:\n",n);
for(i=0;i<n;i++)
scanf("%s%s%s%s%f",&s1[i].e_no,&s1[i].r,s1[i].branch,s1[i].name,&s1[i].marks);
printf("\n The display is:\n");
printf("Enrolment no.\tRoll no.\tBranch\t\tName\tMarks\t\t\t\n");
for(i=0;i<n;i++)
printf("%s\t\t%s\t\t%s\t%s\t%f\t\n",s1[i].e_no,s1[i].r,s1[i].branch,s1[i].name,s1[i].marks);
}

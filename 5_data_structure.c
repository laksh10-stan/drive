#include<stdio.h>
struct student
{
int roll_no;
char name[20];
float marks;
}s[5];
main()
{
int i,j;
printf("Enter the Name ,Marks,and Roll no of 5 studets\n");
for(i=0;i<5;i++)
{

scanf("%s%d%f",&s[i].name,&s[i].roll_no,&s[i].marks);

}
printf("\t\tName\t\tmarks\t\tRoll No\t\t\n");

for(j=0;j<5 ;j++)
{
printf("s[%d]\t\t%s\t\t%f\t\t%d\n", j,s[j].name,s[j].marks,s[j].roll_no);

}
}

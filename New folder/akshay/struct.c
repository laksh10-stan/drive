#include<stdio.h>
struct student
{
int r;
char name[90];
int age;
}s[10];
main()
{
int i,j;
printf("enter the name ,roll no.,and age of 10 studets\n");
for(i=0;i<10;i++)
{

scanf("%s%d%d",&s[i].name,&s[i].r,&s[i].age);

}

for(j=0;j<10 ;j++)
{
printf("name age and roll no. of s[%d] is %s %d %d\n", j,s[j].name,s[j].age,s[j].r);

}
}

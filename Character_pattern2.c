#include<stdio.h>
main()
{
int i,j,n;
char ch='A';
printf("enter the number of rows\n");
scanf("%d",&n);

for(i=n;i>=1;i--)
{
for(j=i;j>=1;j--)
{
printf("%c\t",ch);
ch=ch+1;

}
printf("\n");
ch='A';
}
}

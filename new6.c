#include<stdio.h>
main()
{
int i,j,n;
char ch='A';
printf("enter the number of rows\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%c\t",ch);
ch=ch+1;

}
printf("\n");
ch='A';
}
}

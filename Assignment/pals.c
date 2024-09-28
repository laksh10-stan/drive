#include <stdio.h>
main()
{
char str2[100],res[100];
int a=0,b=0,i,j=0,k=0;
printf("Enter the string\n");
scanf("%s",str2);
for(j=0;str2[j]!='0';j++)
{
k++;
}
while(j==0)
{
res[j]=str2[k];
j++;
k--;
}
puts(res);
for(i=0;i<j;i++)
{
if (res[i]==str2[i])
{
printf ("Yes\n");
}
else 
printf ("NO\n");
}
}

#include<stdio.h>
main()
{
int i=0,c=0,l,f=0;
char str[100],ustr[100];
int n,s;
printf("enter the string:");
gets(str);
puts(str);
while(str[i]!=NULL)
{
i++;
c++;
}
c=c-1;
l=c;
printf("c=%d",c);
for(i=0;i<=c;i++)
{
  ustr[i]=str[l];
  l--;
printf("\t%d",i);
printf("\t%c",ustr[i]);
}
ustr[i]='\0';
printf("\n\n");
puts(ustr);
for(i=0;ustr[i]!=NULL;i++)
{
if(ustr[i]==str[i])
f=1;
else
f=0;
}

if(f==1)
printf("palindrom");
else
printf("not");


}



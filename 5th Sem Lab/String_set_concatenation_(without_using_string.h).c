#include<stdio.h>
main()
{
char str1[20],str2[20],str3[20],str4[20],str5[20],str6[20],str7[20],str8[20],str9[20],str10[20],res[100];
int a=0,b=0,n,i;
str1[0]='\0',str2[0]='\0',str3[0]='\0',str4[0]='\0',str5[0]='\0',str6[0]='\0',str7[0]='\0',str8[0]='\0',str9[0]='\0',str10[0]='\0';
printf("Enter the no. of  strings you want to concatenate:\n");
scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("Enter string %d:\n",i);
	if (i==1)
	{
	scanf("%s",str1);
    }
    if (i==2)
	{
	scanf("%s",str2);
    }
    if (i==3)
	{
	scanf("%s",str3);
    }
    if (i==4)
	{
	scanf("%s",str4);
    }
    if (i==5)
	{
	scanf("%s",str5);
    }
    if (i==6)
	{
	scanf("%s",str6);
    }
    if (i==7)
	{
	scanf("%s",str7);
    }
    if (i==8)
	{
	scanf("%s",str8);
    }
    if (i==9)
	{
	scanf("%s",str9);
    }
    if (i==10)
	{
	scanf("%s",str10);
    }
    }
    i=i-1;
    printf("The no. of strings is %d\n",i);  
while(str1[a]!='\0'){
res[a]=str1[a];
a++;
}
while(str2[b]!='\0'){
res[a]=str2[b];
a++;
b++;
}
b=0;
while(str3[b]!='\0'){
res[a]=str3[b];
a++;
b++;
}
b=0;
while(str4[b]!='\0'){
res[a]=str4[b];
a++;
b++;
}
b=0;
while(str5[b]!='\0'){
res[a]=str5[b];
a++;
b++;
}
b=0;
while(str6[b]!='\0'){
res[a]=str6[b];
a++;
b++;
}
b=0;
while(str7[b]!='\0'){
res[a]=str7[b];
a++;
b++;
}
b=0;
while(str8[b]!='\0'){
res[a]=str8[b];
a++;
b++;
}
b=0;
while(str9[b]!='\0'){
res[a]=str9[b];
a++;
b++;
}
b=0;
while(str10[b]!='\0'){
res[a]=str10[b];
a++;
b++;
}
res[a]='\0';
printf("\n The concatenated string is:%s\n",res);
}

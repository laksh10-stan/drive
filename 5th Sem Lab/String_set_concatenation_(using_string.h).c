#include<stdio.h>
#include<string.h>
main()
{   
    int n,i,j;
	char str1[20],str2[20],str3[20],str4[20],str5[20],str6[20],str7[20],str8[20],str9[20],str10[20],res[200];
	res[0]='\0';
	printf("Enter the no. of strings to be conctenated:\n");
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
    
    if(n==2)
    {
    	strcpy(res,str1);
    	strcat(res,str2);
    	puts(res);
	}
     if(n==3)
     {
      strcpy(res,str1);
    	strcat(res,str2);
    	strcat(res,str3);
    	puts(res);
	 }
	 if(n==4)
     {
      strcpy(res,str1);
    	strcat(res,str2);
    	strcat(res,str3);
    	strcat(res,str4);
    	puts(res);
	 }
	 if(n==5)
     {
      strcpy(res,str1);
    	strcat(res,str2);
    	strcat(res,str3);
    	strcat(res,str4);
    	strcat(res,str5);
    	puts(res);
	 }
	 if(n==6)
     {
      strcpy(res,str1);
    	strcat(res,str2);
    	strcat(res,str3);
    	strcat(res,str4);
    	strcat(res,str5);
    	strcat(res,str6);
    	puts(res);
	 }
	 if(n==7)
     {
      strcpy(res,str1);
    	strcat(res,str2);
    	strcat(res,str3);
    	strcat(res,str4);
    	strcat(res,str5);
    	strcat(res,str6);
    	strcat(res,str7);
    	puts(res);
	 }
	 if(n==8)
     {
      strcpy(res,str1);
    	strcat(res,str2);
    	strcat(res,str3);
    	strcat(res,str4);
    	strcat(res,str5);
    	strcat(res,str6);
    	strcat(res,str7);
    	strcat(res,str8);
    	puts(res);
	 }
	 if(n==9)
     {
      strcpy(res,str1);
    	strcat(res,str2);
    	strcat(res,str3);
    	strcat(res,str4);
    	strcat(res,str5);
    	strcat(res,str6);
    	strcat(res,str7);
    	strcat(res,str8);
    	strcat(res,str9);
    	puts(res);
	 }
	 if(n==10)
     {
      strcpy(res,str1);
    	strcat(res,str2);
    	strcat(res,str3);
    	strcat(res,str4);
    	strcat(res,str5);
    	strcat(res,str6);
    	strcat(res,str7);
    	strcat(res,str8);
    	strcat(res,str9);
    	strcat(res,str10);
    	puts(res);
	 }
}

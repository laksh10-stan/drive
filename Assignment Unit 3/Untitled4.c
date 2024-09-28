#include<stdio.h>
#include<string.h>
main()
{   
    int n,i,j;
	char str1[20],str2[20],str3[20],str4[20],str5[20],str6[20],str7[20],str8[20],str9[20],str10[20],res[200];
	res[0]=NULL;
	printf("Enter the no. of strings to be conctenated:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("Enter string %d",i);
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
    printf("%d",i);
     puts(str1);
    if(n==2)
    {
    	res[200]=strcat(str1,str2);
    	puts(res);
	}
    /* if(i==3)
     {
     	res[200]=strcat(str1,str2);
     	puts(res);
     	res[200]=strcat(res,str3);
     	puts(res);
	 }*/
	
}

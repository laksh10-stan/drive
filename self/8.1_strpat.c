#include <stdio.h>
#include<string.h>
main()
{
	int i,j,len;
	char str[20];
	printf("Enter the desired string:\n");
	gets(str);
	len=strlen(str);
	printf("The length of string enterd is %d\n",len);
	for(i=0;i<=len-1;i++)
	{ 
	    j=i+1;
		printf("%-*.*s\n",len,j,str);
	}
	
}

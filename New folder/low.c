#include<stdio.h>

main()
{
	char str[100],ustr[100];
	int i=0;
	printf("enter the string\n");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
		ustr[i]=str[i]+32;
		else
		ustr[i]=str[i];
		i++;
	}
	ustr[i]='\0';
		printf("the lower case string is :");
		printf("%s",ustr);
	}
	

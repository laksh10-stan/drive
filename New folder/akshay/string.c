#include<stdio.h>
#include<conio.h>
main()
{
	char str[50],ch;
	int i,c=0;
	printf("enter the string\n");
	gets(str);
		printf("enter  thecharactervto find frequency ");
		scanf("%c",&ch);	
		for(i=0;str[i]!='\o';i++)
		{
			if(ch==str[i])
			c++;
	}
		printf("frequency of %c =%d\t",ch,c);	
		}
		

#include<stdio.h>
main()
{
	int i,m=0,j;
	char ch;
	char *str[4]={"Virat Kohli","Steve Smith","Joe Root","Kane Williamson"};
	for(i=0;i<4;i++)
	{
		printf("str[%d]=%s\n",i,str[i]);
	}
	printf("Enter the character you want to search:\n");
	scanf("%c",&ch);
	for(i=0;i<4;i++)
	{
		for(j=0;str[i][j]!='\0';j++)
		{
			if(ch==str[i][j])
			{
				m=m+1;
			}
		}
	}
	printf("The frequency of %c is %d",ch,m);
}

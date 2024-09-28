#include<stdio.h>
#include<ctype.h>
main()
{
	int i;
	char c;//e=1,ggm,h=?,i=$,j=!;
	for(i=0;i<10;i++)
	{	
	c=getchar();
	if (isalpha(c)>0)
	{
	printf("Letter\n");
    }
	else if(isdigit(c)>0)
	{
	printf("dig\n");
    }
	else
	{
	printf("not alphanum\n");
    }
}
}

#include <stdio.h>
#include <conio.h>
main()
{
	char str[50],ch;
	int i,c=0;
	printf ("Enter the string:\n");
	gets(str);
	
	printf ("Enter the character to find frequency:\n");
	scanf ("%c",&ch);
	for (i=0;str[i]!='\0';i++)
	{
		if (ch==str[i])
		c++;
	}
	printf ("freuency of %c=%d",ch,c);
}



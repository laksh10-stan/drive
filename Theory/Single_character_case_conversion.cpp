#include <stdio.h>
#include <conio.h>
 main()
{
	char ch;
	printf ("Enter the character:\n");
	scanf ("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		ch=ch-32;
		printf ("%c",ch);
	}
	else if(ch>='A'&&ch<='Z')
	{
		ch=ch+32;
		printf ("%c",ch);
	}
	else
	{
		printf ("Wrong Input");
	}
}

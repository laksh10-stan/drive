#include <stdio.h>
#include <conio.h>
main()
{
	int i;
	for (i=0;i<=10;i++)
	{
		if (i==5||i==4||i==3)
		goto stop;
		printf ("%d",i);
	}
	stop:
		printf ("\n Good Bye");
}

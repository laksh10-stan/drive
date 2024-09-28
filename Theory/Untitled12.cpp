#include <stdio.h>
#include <conio.h>
main()
{
	int i;
	for (i=0;i<=10;i++)
	{
		if (i==5||i==4||i==3)
		continue;
		printf ("%d",i);
	}
}

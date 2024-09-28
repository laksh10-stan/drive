#include <stdio.h>
#include <conio.h>
main()
{
	int phy,chem,maths,bio,arts;
	float a;
	printf ("Enter the marks of 5 subjects\n");
	scanf ("%d%d%d%d%d",&phy,&chem,&maths,&bio,&arts);
	a=(phy+chem+maths+bio+arts)/5;
	printf ("%f percentage",a);
	if (a>100)
	{
		printf ("\nInvalid Entry");
	}
	else if (a>80)
	{
		printf ("\nA Grade");
	}
	else if (a>60)
	{
		printf ("\nB grade");
	}
	else if (a>40)
	{
		printf ("\nC Grade");
	}
	else if (a>0)
	{
		printf ("\nFail");
	}
	else
	printf ("\nInvalid Entry");
}

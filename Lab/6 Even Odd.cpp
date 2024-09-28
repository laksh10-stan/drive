#include <stdio.h>
#include <conio.h>
 int main ()
{
	int a, b;
	printf ("Enter the number: \n");
	scanf ("%d",&a);
	b=a%2;
	if (b==0)
	{
	printf ("Even");
    }
    else 
	 printf ("Odd");
}
